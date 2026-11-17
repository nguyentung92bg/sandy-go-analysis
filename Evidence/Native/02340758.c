/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$FormatRemain
System_String_o* Dino_BusSand_App_Meta_LiveClock__FormatRemain (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$FormatRemain
   System_String_o* Dino_BusSand_App_Meta_LiveClock__FormatRemain (int64_t seconds, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  int iVar6;
  ulong uStack_38;
  
  uVar5 = 0;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar5 = extraout_x1;
  }
  puVar1 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)param_1 < 1) {
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < param_1 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar5);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar5 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar5 = System_String__Concat_46d30e8(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0)
    ;
    return uVar5;
  }
  lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar2 = PTR_DAT_04cab398;
  uStack_38 = (param_1 & 0xffffffff) / 0xe10;
  uVar5 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),uVar5);
      puVar1 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28));
        iVar6 = (int)((param_1 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar6 + (((uint)((param_1 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) *
                                    -0x3c) & 0xffff;
        uVar5 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar5;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),uVar5);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38));
            uStack_38 = (ulong)(uint)((int)param_1 + iVar6 * -0x3c);
            uVar5 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar5;
              thunk_FUN_02134474();
              uVar5 = System_String__Concat_46d31f0(lVar3,0);
              return uVar5;
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

