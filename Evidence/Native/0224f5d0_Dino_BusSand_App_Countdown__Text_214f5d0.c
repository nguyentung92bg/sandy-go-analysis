/* IL2CPP: Dino.BusSand.App.Countdown$$Text
System_String_o* Dino_BusSand_App_Countdown__Text (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Countdown$$Text
   System_String_o* Dino_BusSand_App_Countdown__Text (int64_t seconds, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Countdown__Text_214f5d0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uStack_38;
  
                    /* try { // try from 0224f5d0 to 0234f623 has its CatchHandler @ 0224f55c */
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
                    /* try { // try from 0224f624 to 0234f6ab has its CatchHandler @ 0224f734 */
    bRam0000000004f9b7b7 = 1;
  }
  puVar1 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)param_1 < 1) {
                    /* try { // try from 0224f7ac to 0234f7b3 has its CatchHandler @ 0224ff94 */
    return *(undefined8 *)PTR_DAT_04cab390;
  }
  if (0x2a2 < param_1 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar5 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_String__Concat_46d30e8(uVar4,*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1,0)
    ;
    return uVar4;
  }
  lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar2 = PTR_DAT_04cab398;
  uStack_38 = (param_1 & 0xffffffff) / 0xe10;
  uVar4 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),uVar4);
      puVar1 = PTR_DAT_04cab388;
                    /* try { // try from 0224f6ac to 0234f74f has its CatchHandler @ 0224f55c */
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28));
        iVar6 = (int)((param_1 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar6 + (((uint)((param_1 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) *
                                    -0x3c) & 0xffff;
        uVar4 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar4;
                    /* catch() { ... } // from try @ 0224f5ac with catch @ 0224f72c */
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),uVar4);
                    /* catch() { ... } // from try @ 0224f5cc with catch @ 0224f730 */
                    /* catch() { ... } // from try @ 0224f624 with catch @ 0224f734 */
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38));
                    /* catch() { ... } // from try @ 0224fe7c with catch @ 0224f750
                       catch() { ... } // from try @ 0224ff88 with catch @ 0224f750 */
            uStack_38 = (ulong)(uint)((int)param_1 + iVar6 * -0x3c);
            uVar4 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar2,0);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar4;
              thunk_FUN_02134474();
              uVar4 = System_String__Concat_46d31f0(lVar3,0);
              return uVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0224f7d4 to 0234f7fb has its CatchHandler @ 0224ffac */
  FUN_02133224();
}

