/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$IsScheduledLevel
bool Dino_BusSand_App_UI_CommentPopPanel__IsScheduledLevel (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$IsScheduledLevel
   bool Dino_BusSand_App_UI_CommentPopPanel__IsScheduledLevel (int32_t level, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_CommentPopPanel__IsScheduledLevel_22a4f40(int param_1)

{
  if (param_1 == 0xb) {
    return true;
  }
  if (param_1 < 0x68) {
    return false;
  }
  return ((uint)((param_1 + -0x68) * -0x3d70a3d7) >> 2 | param_1 * 0x40000000) < 0x28f5c29;
}

