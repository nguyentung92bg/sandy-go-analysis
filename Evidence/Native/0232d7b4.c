/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature.<HallAutoOpen>d__99$$MoveNext
bool Dino_BusSand_App_Meta_ClimbTowerFeature__HallAutoOpen_d__99__MoveNext (Dino_BusSand_App_Meta_ClimbTowerFeature__HallAutoOpen_d__99_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature.<HallAutoOpen>d__99$$MoveNext
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__HallAutoOpen_d__99__MoveNext
   (Dino_BusSand_App_Meta_ClimbTowerFeature__HallAutoOpen_d__99_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_ClimbTowerFeature__HallAutoOpen_d__99__MoveNext_222d7b4(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9be4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9be4c = 1;
  }
  cVar1 = cRam0000000004f9b94d;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar1 == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (lVar3 == 0) goto LAB_0232d8f8;
    uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__OpenMain_222cd3c(lVar3,0,0);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    thunk_FUN_02134474();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_0232d8f8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x2c) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}

