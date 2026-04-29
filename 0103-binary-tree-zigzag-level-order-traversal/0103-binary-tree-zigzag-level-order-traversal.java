class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode node) {
        List<List<Integer>> result = new ArrayList<>();

        if(node == null) return result;

        Queue<TreeNode> q = new LinkedList<>();
        q.offer(node);

        boolean leftToRight = true;

        while(!q.isEmpty()){
            int size = q.size();
            Integer[] level = new Integer[size];

            for(int i = 0; i < size; i++){
                TreeNode curr = q.poll();

                int index = leftToRight ? i : size - 1 - i;
                level[index] = curr.val;

                if(curr.left != null) q.offer(curr.left);
                if(curr.right != null) q.offer(curr.right);
            }

            // level complete hone ke baad add karo
            result.add(Arrays.asList(level));

            // ab direction flip karo
            leftToRight = !leftToRight;
        }

        return result;
    }
}