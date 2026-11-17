/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinueOrder
System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate__o* Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder (bool passport, int32_t passportPackId, int32_t passportPriority, bool golden, int32_t goldenPackId, int32_t goldenPriority, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinueOrder
   System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate__o*
   Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder (bool passport, int32_t passportPackId,
   int32_t passportPriority, bool golden, int32_t goldenPackId, int32_t goldenPriority, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder_22c3910
               (ulong param_1,long param_2,long param_3,ulong param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar3 = PTR_DAT_04cb6778;
  puVar2 = PTR_DAT_04cb6770;
  if ((bRam0000000004f9c346 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6780);
    FUN_02132f7c(PTR_DAT_04cb6788);
    FUN_02132f7c(PTR_DAT_04cb6790);
    FUN_02132f7c(PTR_DAT_04cb6778);
    FUN_02132f7c(PTR_DAT_04cb6770);
    FUN_02132f7c(PTR_DAT_04cb6798);
    FUN_02132f7c(PTR_DAT_04cb67a0);
    bRam0000000004f9c346 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate____ctor_3b30114
            (lVar4,2,*(undefined8 *)puVar3);
  if ((param_1 & 1) != 0) {
    if (lVar4 == 0) goto LAB_023c3b5c;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cb6788;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_023c3b5c;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(long *)(lVar8 + 0x20) = param_3 << 0x20;
      *(long *)(lVar8 + 0x28) = param_2 << 0x20;
    }
    else {
      System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___AddWithResize_3b30934
                (lVar4,param_3 << 0x20,param_2 << 0x20,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((param_4 & 1) != 0) {
    if (lVar4 == 0) goto LAB_023c3b5c;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cb6788;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_023c3b5c;
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar7 = (ulong)param_5 << 0x20 | 1;
                    /* try { // try from 023c3a54 to 024c3a57 has its CatchHandler @ 023c45d0 */
    uVar6 = (ulong)param_6 << 0x20 | 1;
                    /* try { // try from 023c3a58 to 024c3a87 has its CatchHandler @ 023c46d8 */
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar8 + 0x20) = uVar6;
      *(ulong *)(lVar8 + 0x28) = uVar7;
    }
    else {
                    /* try { // try from 023c3a90 to 024c3ab3 has its CatchHandler @ 023c461c */
      System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___AddWithResize_3b30934
                (lVar4,uVar6,uVar7,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  puVar2 = PTR_DAT_04cb67a0;
  lVar8 = *(long *)PTR_DAT_04cb67a0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
                    /* try { // try from 023c3ac4 to 024c3acb has its CatchHandler @ 023c4cb0 */
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 023c3ad4 to 024c3adf has its CatchHandler @ 023c46ac */
      thunk_FUN_0218fdac();
      puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
                    /* try { // try from 023c3ae8 to 024c3af7 has its CatchHandler @ 023c46a0 */
    uVar11 = *puVar9;
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb6780);
                    /* try { // try from 023c3b04 to 024c3b0b has its CatchHandler @ 023c4694 */
    System_Comparison_EndOfLevelRules_ContinueCandidate____ctor_332a15c
              (lVar10,uVar11,*(undefined8 *)PTR_DAT_04cb6798,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_02134474(plVar5,lVar10);
  }
                    /* try { // try from 023c3b24 to 024c3b3b has its CatchHandler @ 023c4688 */
  if (lVar4 != 0) {
    System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___Sort_3b32390
              (lVar4,lVar10,*(undefined8 *)PTR_DAT_04cb6790);
                    /* try { // try from 023c3b50 to 024c3b53 has its CatchHandler @ 023c45cc */
    return lVar4;
  }
LAB_023c3b5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

