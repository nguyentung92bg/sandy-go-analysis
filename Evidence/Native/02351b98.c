/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ActivityTimeString
System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString (int64_t endMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ActivityTimeString
   System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString (int64_t endMs, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  int iVar7;
  ulong uStack_38;
  
  lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  uVar6 = 0;
  uVar1 = (param_1 - lVar5) / 1000;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar6 = extraout_x1;
  }
  puVar2 = PTR_DAT_04cab3a8;
  puVar3 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)uVar1 < 1) {
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < uVar1 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar6);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar6 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar6 = System_String__Concat_46d30e8(uVar6,*(undefined8 *)puVar3,uVar4,*(undefined8 *)puVar2,0)
    ;
    return uVar6;
  }
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar3 = PTR_DAT_04cab398;
  uStack_38 = (uVar1 & 0xffffffff) / 0xe10;
  uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar6);
      puVar2 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
        iVar7 = (int)((uVar1 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar7 + (((uint)((uVar1 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c)
                    & 0xffff;
        uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar3,0);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar6);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)puVar2;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
            uStack_38 = (ulong)(uint)((int)uVar1 + iVar7 * -0x3c);
            uVar6 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar3,0);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar6;
              thunk_FUN_02134474();
              uVar6 = System_String__Concat_46d31f0(lVar5,0);
              return uVar6;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

