/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPathPoints
UnityEngine_Vector3_array* Dino_BusSand_View_StageLayout__ReturnPathPoints (Dino_BusSand_View_StageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPathPoints
   UnityEngine_Vector3_array* Dino_BusSand_View_StageLayout__ReturnPathPoints
   (Dino_BusSand_View_StageLayout_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_StageLayout__ReturnPathPoints_23e4e18(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar1 == **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e4e74;
  }
  Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_1);
LAB_024e4e74:
  return *(undefined8 *)(param_1 + 0x120);
}

