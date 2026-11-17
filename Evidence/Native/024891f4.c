/* IL2CPP: Dino.BusSand.Haptics$$Pattern
void Dino_BusSand_Haptics__Pattern (System_Int64_array* timings, System_Int32_array* amps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248963c) */
/* IL2CPP: Dino.BusSand.Haptics$$Pattern
   void Dino_BusSand_Haptics__Pattern (System_Int64_array* timings, System_Int32_array* amps, const
   MethodInfo* method); */

void Dino_BusSand_Haptics__Pattern_23891f4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uStack_60;
  long **pplStack_58;
  undefined4 uStack_48;
  long *plStack_38;
  
  puVar1 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c888 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04cbbcb8);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cbbcd0);
    FUN_02132f7c(PTR_DAT_04cbbcd8);
    FUN_02132f7c(PTR_DAT_04cbbd00);
    bRam0000000004f9c888 = 1;
  }
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Haptics__Vibrator_238978c();
  if (lVar2 != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar9 = *(long *)(lVar3 + 0xb8);
    if (*(int *)(lVar9 + 0x28) < 0x1a) {
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02489570 to 02589577 has its CatchHandler @ 02489680 */
      if ((param_1 != 0) &&
         (lVar3 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[4] = param_1;
                    /* try { // try from 02489584 to 02589593 has its CatchHandler @ 0248967c */
      thunk_FUN_02134474(plVar6 + 4,param_1);
                    /* try { // try from 02489594 to 0258964f has its CatchHandler @ 02489058 */
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      lVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_60);
      if ((lVar3 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                    /* try { // try from 02489650 to 02589657 has its CatchHandler @ 024896e0 */
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02489658 to 0258965b has its CatchHandler @ 024896d8 */
        FUN_021330e8(uVar4,0);
      }
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[5] = lVar3;
      thunk_FUN_02134474(plVar6 + 5,lVar3);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar2,*(undefined8 *)PTR_DAT_04cbbcd0,plVar6,0);
    }
    else {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
        lVar9 = *(long *)(lVar3 + 0xb8);
      }
      if (*(long *)(lVar9 + 0x18) == 0) {
        uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
        UnityEngine_AndroidJavaClass___ctor_432cda0(uVar4,*(undefined8 *)PTR_DAT_04cbbcd8,0);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
        *puVar5 = uVar4;
        thunk_FUN_02134474(puVar5,uVar4);
                    /* try { // try from 0248933c to 02589363 has its CatchHandler @ 024896e8 */
        lVar3 = *(long *)puVar1;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_04ca9c20;
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((param_1 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                    /* try { // try from 0248965c to 0258965f has its CatchHandler @ 024896d4 */
        uVar4 = thunk_FUN_0217c344();
                    /* try { // try from 02489660 to 02589663 has its CatchHandler @ 02489678 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02489664 to 0258969b has its CatchHandler @ 02489058 */
        FUN_021330e8(uVar4,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[4] = param_1;
                    /* try { // try from 024893a0 to 025893cb has its CatchHandler @ 024896e4 */
      thunk_FUN_02134474(plVar6 + 4,param_1);
      if ((param_2 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0248940c with catch @ 02489670 */
        FUN_021330e8(uVar4,0);
      }
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[5] = param_2;
      thunk_FUN_02134474(plVar6 + 5,param_2);
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_60);
                    /* try { // try from 0248940c to 0258940f has its CatchHandler @ 02489670 */
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                    /* catch() { ... } // from try @ 02489460 with catch @ 02489674 */
        uVar4 = thunk_FUN_0217c344();
                    /* catch() { ... } // from try @ 02489660 with catch @ 02489678 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02489584 with catch @ 0248967c */
        FUN_021330e8(uVar4,0);
      }
                    /* try { // try from 02489410 to 0258941f has its CatchHandler @ 024896d0 */
      if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[6] = lVar9;
      thunk_FUN_02134474(plVar6 + 6,lVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plStack_38 = (long *)UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                                     (lVar3,*(undefined8 *)PTR_DAT_04cbbd00,plVar6,
                                      *(undefined8 *)PTR_DAT_04cbbcb8);
      pplStack_58 = &plStack_38;
                    /* try { // try from 02489460 to 02589483 has its CatchHandler @ 02489674 */
      uStack_60 = 0;
      plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
      plVar6 = plStack_38;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 0248948c to 0258948f has its CatchHandler @ 024896dc */
      if ((plStack_38 != (long *)0x0) &&
         (lVar3 = thunk_FUN_0216e7a0(plStack_38,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
                    /* catch() { ... } // from try @ 02489570 with catch @ 02489680 */
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,0);
      }
                    /* try { // try from 02489490 to 0258956f has its CatchHandler @ 02489058 */
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar8[4] = (long)plVar6;
      thunk_FUN_02134474(plVar8 + 4,plVar6);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar2,*(undefined8 *)PTR_DAT_04cbbcd0,plVar8,0);
      plVar6 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        lVar2 = *plStack_38;
        uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0248952c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plStack_38,*(long *)PTR_DAT_04ca9b30,0);
LAB_0248952c:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
    }
  }
  return;
}

