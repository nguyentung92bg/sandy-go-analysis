/* IL2CPP: Dino.BusSand.View.VehicleView$$UseShiftMark
bool Dino_BusSand_View_VehicleView__UseShiftMark (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$UseShiftMark
   bool Dino_BusSand_View_VehicleView__UseShiftMark (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_View_VehicleView__UseShiftMark_23fc980(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000004f9caee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc848);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cbe028);
    bRam0000000004f9caee = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe1) != '\0') {
    plVar6 = (long *)(param_1 + 0x68);
    lVar4 = *plVar6;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    lVar4 = 0;
    if ((uVar2 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_024fcbcc;
      lVar4 = UnityEngine_Transform__get_parent_43d0d70(*plVar6,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    lVar5 = 0;
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) goto LAB_024fcbcc;
      lVar5 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cbe028,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if ((*plVar6 != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0), lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        *plVar6 = lVar5;
        thunk_FUN_02134474(plVar6,lVar5);
        if (lVar5 != 0) {
          lVar4 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb9428,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
          uVar3 = 0;
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) goto LAB_024fcbcc;
            uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                              (lVar4,*(undefined8 *)PTR_DAT_04cbc848);
          }
          *(undefined8 *)(param_1 + 0x118) = uVar3;
          thunk_FUN_02134474(param_1 + 0x118);
          uVar3 = *(undefined8 *)(param_1 + 0x118);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_1 + 0x118) == 0) goto LAB_024fcbcc;
            UnityEngine_SpriteRenderer__set_color_434e234
                      (0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x318),
                       *(long *)(param_1 + 0x118),0);
          }
          uVar3 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cbe028,0);
          *(undefined8 *)(param_1 + 0x310) = uVar3;
          thunk_FUN_02134474(param_1 + 0x310,uVar3);
          Dino_BusSand_View_VehicleView__ApplyHiddenMark_23faf08(param_1);
          return 1;
        }
      }
LAB_024fcbcc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

