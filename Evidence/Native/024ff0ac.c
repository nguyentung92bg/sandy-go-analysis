/* IL2CPP: Dino.BusSand.View.VehicleView$$get_IntakeLocal
UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_IntakeLocal (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_IntakeLocal
   UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_IntakeLocal
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_VehicleView__get_IntakeLocal_23ff0ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if ((bRam0000000004f9cafc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe048);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cafc = 1;
  }
  puVar1 = PTR_DAT_04cbc460;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xb8) != '\0') {
      lVar4 = *(long *)(param_1 + 0xc0);
      if (lVar4 == 0) goto LAB_024ff1f0;
      lVar2 = *(long *)PTR_DAT_04cbc460;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)(param_1 + 0xc0);
        if (lVar4 == 0) goto LAB_024ff208;
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
      if (lVar2 == 0) {
LAB_024ff208:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = System_Collections_Generic_Dictionary_object__ValueTuple_Vector2__Vector2__float__float__float____TryGetValue_3486f74
                        (lVar2,*(undefined8 *)(lVar4 + 0x10),&uStack_40,
                         *(undefined8 *)PTR_DAT_04cbe048);
      if (((uVar3 & 1) != 0) || (*(char *)(param_1 + 0xb8) != '\0')) goto LAB_024ff1f0;
    }
    Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_1);
  }
LAB_024ff1f0:
  return ZEXT816(0);
}

