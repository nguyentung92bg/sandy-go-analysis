/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Settle>d__53$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Settle_d__53__MoveNext (Dino_BusSand_Cheat_AutoQa__Settle_d__53_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Settle>d__53$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Settle_d__53__MoveNext
   (Dino_BusSand_Cheat_AutoQa__Settle_d__53_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Settle_d__53__MoveNext_23551a0(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  
  if ((bRam0000000004f9c717 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c717 = 1;
  }
  fVar13 = _UNK_00e2098c;
  lVar12 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar13 = *(float *)(param_1 + 0x3c) + fVar13;
    *(float *)(param_1 + 0x3c) = fVar13;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 == 0) goto LAB_02455508;
    fVar13 = 0.0;
    *(undefined4 *)(lVar12 + 0x2c) = 0xbf800000;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x38) <= fVar13) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
    ;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = bVar2 & 1;
LAB_024552c0:
    *(byte *)(lVar12 + 0x28) = bVar2;
    return 0;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  if ((uVar3 & 1) != 0) {
    if (lVar12 != 0) {
      bVar2 = 1;
      goto LAB_024552c0;
    }
    goto LAB_02455508;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698(0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar3 & 1) == 0) goto LAB_02455444;
  if ((lVar8 == 0) ||
     (plVar4 = (long *)System_Object__GetType_4876970(lVar8,0), plVar4 == (long *)0x0))
  goto LAB_02455508;
  uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_04cb4190);
      uVar3 = System_String__op_Inequality_46d110c(uVar6,uVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_02455430;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == 0) goto LAB_02455508;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar11 = *(long *)PTR_DAT_04cab718;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_02455508;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar5;
      thunk_FUN_02134474(puVar7,uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
LAB_02455430:
  if (lVar12 != 0) {
    Dino_BusSand_Cheat_AutoQa__Tap_23429d0(lVar12,lVar8,0);
LAB_02455444:
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e2098c,uVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_02455508:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

