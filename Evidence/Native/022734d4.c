/* IL2CPP: Dino.BusSand.App.CrashContext$$AdCreative
void Dino_BusSand_App_CrashContext__AdCreative (System_String_o* network, System_String_o* creativeId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$AdCreative
   void Dino_BusSand_App_CrashContext__AdCreative (System_String_o* network, System_String_o*
   creativeId, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__AdCreative_21734d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  double unaff_x23;
  float fVar16;
  double dVar17;
  double dVar18;
  int iStack_44;
  
  puVar2 = PTR_DAT_04cac450;
                    /* catch() { ... } // from try @ 02273494 with catch @ 022734e8 */
  if ((bRam0000000004f9b8b7 & 1) == 0) {
                    /* try { // try from 02273508 to 0237350b has its CatchHandler @ 02273514 */
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02273508 with catch @ 02273514
                        */
                    /* try { // try from 02273518 to 02373547 has its CatchHandler @ 02273518
                       catch() { ... } // from try @ 02273518 with catch @ 02273518
                       catch() { ... } // from try @ 02273554 with catch @ 02273518 */
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cacda0);
    FUN_02132f7c(PTR_DAT_04cacda8);
    FUN_02132f7c(PTR_DAT_04cacdb0);
                    /* try { // try from 02273548 to 02373553 has its CatchHandler @ 02273574 */
    FUN_02132f7c(PTR_DAT_04cacdb8);
    bRam0000000004f9b8b7 = 1;
  }
  puVar6 = PTR_DAT_04cacdb8;
  puVar5 = PTR_DAT_04cacdb0;
  puVar3 = PTR_DAT_04cacda0;
                    /* try { // try from 02273554 to 0237358f has its CatchHandler @ 02273518 */
                    /* catch() { ... } // from try @ 02273548 with catch @ 02273574 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cacda8;
  puVar1 = PTR_DAT_04cab270;
                    /* try { // try from 02273590 to 02373607 has its CatchHandler @ 02273590
                       catch() { ... } // from try @ 02273590 with catch @ 02273590
                       catch() { ... } // from try @ 0227361c with catch @ 02273590 */
  uVar9 = Dino_BusSand_App_CrashContext__Clip_2173674(param_1);
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar5,uVar9);
  uVar9 = Dino_BusSand_App_CrashContext__Clip_2173674(param_2);
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar6,uVar9);
  uVar10 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  uVar9 = *(undefined8 *)puVar3;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_App_CrashContext__Clip_2173674(param_1);
  }
  else {
    uVar13 = *(undefined8 *)puVar4;
  }
  uVar10 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  uVar15 = *(undefined8 *)puVar1;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 0227361c to 02373647 has its CatchHandler @ 02273590 */
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_CrashContext__Clip_2173674(param_2);
  }
  else {
                    /* try { // try from 02273608 to 0237361b has its CatchHandler @ 02273630 */
    uVar11 = *(undefined8 *)puVar4;
  }
                    /* catch() { ... } // from try @ 02273608 with catch @ 02273630 */
  uVar9 = System_String__Concat_46d30e8(uVar9,uVar13,uVar15,uVar11,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cacbc0;
  if ((bRam0000000004f9b8ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacbc8);
    FUN_02132f7c(PTR_DAT_04cacbd0);
    FUN_02132f7c(PTR_DAT_04cacbd8);
    FUN_02132f7c(PTR_DAT_04cacbe0);
    FUN_02132f7c(PTR_DAT_04cacbc0);
    FUN_02132f7c(PTR_DAT_04cacbe8);
    bRam0000000004f9b8ba = 1;
  }
  iStack_44 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  if (lVar7 == 0) goto LAB_0226fec8;
  puVar12 = (undefined8 *)(lVar7 + 0x18);
  *puVar12 = uVar9;
  thunk_FUN_02134474(puVar12,uVar9);
  fVar16 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cacbe8;
  puVar2 = PTR_DAT_04cac450;
  dVar18 = (double)fVar16;
  dVar17 = (double)FUN_049b52f0(dVar18,&stack0xffffffffffffffd8);
  if (0.0 <= fVar16) {
    if (dVar17 == 0.5) {
      dVar17 = 1.0;
      goto LAB_0226fd34;
    }
    unaff_x23 = (double)(long)(dVar18 + 0.5);
  }
  else if (dVar17 == -0.5) {
    dVar17 = -1.0;
LAB_0226fd34:
    if (((long)unaff_x23 & 1U) != 0) {
      unaff_x23 = unaff_x23 + dVar17;
    }
  }
  else {
    unaff_x23 = (double)(long)(dVar18 + -0.5);
  }
  iStack_44 = -0x80000000;
  if (unaff_x23 != INFINITY) {
    iStack_44 = (int)unaff_x23;
  }
  uVar9 = System_Int32__ToString_482d750(&iStack_44,0);
  uVar9 = System_String__Concat_46d2b84(uVar9,*(undefined8 *)puVar3,*puVar12,0);
  *puVar12 = uVar9;
  thunk_FUN_02134474(puVar12,uVar9);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  plVar14 = (long *)(lVar7 + 0x10);
  *plVar14 = **(long **)(lVar8 + 0xb8);
  thunk_FUN_02134474(plVar14);
  puVar3 = PTR_DAT_04cacbe0;
  if (*plVar14 != 0) {
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar9,lVar7,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_CrashContext__Send_2173340(uVar9);
    return;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    if (0x3f < *(int *)(lVar8 + 0x20)) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_0226fec8;
      }
      System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                (lVar8,*(undefined8 *)PTR_DAT_04cacbc8);
      lVar7 = *(long *)puVar2;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                (lVar7,*puVar12,*(undefined8 *)PTR_DAT_04cacbd0);
      return;
    }
  }
LAB_0226fec8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

