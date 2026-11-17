/* IL2CPP: Dino.BusSand.View.MechanicLayer$$LiftText
System_String_o* Dino_BusSand_View_MechanicLayer__LiftText (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$LiftText
   System_String_o* Dino_BusSand_View_MechanicLayer__LiftText (Dino_BusSand_View_MechanicLayer_o*
   __this, Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method); */

undefined8 Dino_BusSand_View_MechanicLayer__LiftText_23c5938(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c9d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd1e0);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cbd1e8);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cbd1f0);
    FUN_02132f7c(PTR_DAT_04cbd1f8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cbd200);
    FUN_02132f7c(PTR_DAT_04cbd208);
    FUN_02132f7c(PTR_DAT_04cb0c08);
    FUN_02132f7c(PTR_DAT_04cbd210);
    bRam0000000004f9c9d0 = 1;
  }
  puVar2 = PTR_DAT_04ca9c30;
  uStack_28 = 0;
  if ((param_2 == 0) ||
     (iVar3 = Dino_BusSand_Core_Lift__get_Remaining_242e29c(param_2,0), iVar3 < 1)) {
LAB_024c5b00:
    return *(undefined8 *)puVar2;
  }
  if (*(long *)(param_1 + 0x98) == 0) goto LAB_024c5cf0;
  uVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                    (*(long *)(param_1 + 0x98),*(undefined4 *)(param_2 + 0x10),
                     *(undefined8 *)PTR_DAT_04cbd1e0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_2 + 0x28) == 0) {
      iVar3 = Dino_BusSand_Core_Lift__get_Remaining_242e29c(param_2,0);
    }
    else {
      iVar3 = Dino_BusSand_Core_Lift__get_FloorsLeft_242e3e4();
    }
    uStack_28 = CONCAT44(iVar3,(undefined4)uStack_28);
    if (0 < iVar3) {
      uVar7 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
      return uVar7;
    }
    goto LAB_024c5b00;
  }
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar4 = Dino_BusSand_Core_Lift__get_Remaining_242e29c(param_2,0);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar4);
    uVar7 = System_Int32__ToString_482d750(&uStack_28,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar7,0);
    return uVar7;
  }
  iVar3 = Dino_BusSand_Core_Lift__get_FloorsLeft_242e3e4(param_2,0);
  puVar2 = PTR_DAT_04cac5d0;
  lVar6 = *(long *)PTR_DAT_04cac5d0;
  puVar1 = (undefined8 *)PTR_DAT_04cbd210;
  if (iVar3 != 1) {
    puVar1 = (undefined8 *)PTR_DAT_04cbd208;
  }
  uVar7 = *puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar8 == 0) {
    iVar3 = Dino_BusSand_Core_Lift__get_FloorsLeft_242e3e4(param_2,0);
    plVar9 = (long *)PTR_DAT_04cbd1f8;
    if (iVar3 == 1) {
      plVar9 = (long *)PTR_DAT_04cbd200;
    }
    lVar6 = *plVar9;
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar8 == 0) goto LAB_024c5cf0;
    }
    lVar6 = (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),uVar7,*(undefined8 *)(lVar8 + 0x28));
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(lVar6,0);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) goto LAB_024c5cf0;
    uVar5 = System_String__Contains_46d726c(lVar6,*(undefined8 *)PTR_DAT_04cbd1f0,0);
    if ((uVar5 & 1) == 0) goto LAB_024c5bb0;
  }
  else {
LAB_024c5bb0:
    lVar6 = *(long *)PTR_DAT_04cbd1f8;
  }
  lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
      uVar4 = Dino_BusSand_Core_Lift__get_Remaining_242e29c(param_2,0);
      uStack_28 = CONCAT44(uStack_28._4_4_,uVar4);
      uVar7 = System_Int32__ToString_482d750(&uStack_28,0);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar8 + 0x28) = uVar7;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),uVar7);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_04cbd1e8;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30));
          uStack_34 = Dino_BusSand_Core_Lift__get_FloorsLeft_242e3e4(param_2,0);
          uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
          uVar7 = System_String__Format_46c8eb8(lVar6,uVar7,0);
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar8 + 0x38) = uVar7;
            thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38),uVar7);
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_04cb0c08;
              thunk_FUN_02134474();
              uVar7 = System_String__Concat_46d31f0(lVar8,0);
              return uVar7;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_024c5cf0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

