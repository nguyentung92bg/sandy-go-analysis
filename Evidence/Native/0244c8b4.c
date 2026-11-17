/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Frames>d__59$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Frames_d__59__MoveNext (Dino_BusSand_Cheat_AutoQa__Frames_d__59_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Frames>d__59$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Frames_d__59__MoveNext
   (Dino_BusSand_Cheat_AutoQa__Frames_d__59_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Frames_d__59__MoveNext_234c8b4(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x24) + 1;
    *(int *)(param_1 + 0x24) = iVar1;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = 0;
  }
  if (*(int *)(param_1 + 0x20) <= iVar1) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

