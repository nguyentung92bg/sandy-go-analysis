/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$KeyCreative
void Dino_BusSand_Sdk_DinoAdProvider__KeyCreative (Dino_BusSand_Sdk_DinoAdProvider_Loaded_o** slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$KeyCreative
   void Dino_BusSand_Sdk_DinoAdProvider__KeyCreative (Dino_BusSand_Sdk_DinoAdProvider_Loaded_o**
   slot, const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider__KeyCreative_2431240(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
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
  
  if ((bRam0000000004f9cc1a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* try { // try from 02531264 to 0263126b has its CatchHandler @ 02531a90 */
    bRam0000000004f9cc1a = 1;
  }
                    /* try { // try from 0253126c to 02631a87 has its CatchHandler @ 02530ea4 */
  puVar2 = PTR_DAT_04cac450;
  lVar10 = FUN_0216b1e8(param_1,0);
  if (lVar10 == 0) {
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar10 + 0x10);
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450,uVar11,0);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cacda0);
    FUN_02132f7c(PTR_DAT_04cacda8);
    FUN_02132f7c(PTR_DAT_04cacdb0);
    FUN_02132f7c(PTR_DAT_04cacdb8);
    bRam0000000004f9b8b7 = 1;
  }
  puVar6 = PTR_DAT_04cacdb8;
  puVar5 = PTR_DAT_04cacdb0;
  puVar3 = PTR_DAT_04cacda0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cacda8;
  puVar1 = PTR_DAT_04cab270;
  uVar8 = Dino_BusSand_App_CrashContext__Clip_2173674(uVar13);
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar5,uVar8);
  uVar8 = Dino_BusSand_App_CrashContext__Clip_2173674(uVar11);
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar6,uVar8);
  uVar9 = System_String__IsNullOrEmpty_46d2084(uVar13,0);
  uVar8 = *(undefined8 *)puVar3;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_App_CrashContext__Clip_2173674(uVar13);
  }
  else {
    uVar13 = *(undefined8 *)puVar4;
  }
  uVar9 = System_String__IsNullOrEmpty_46d2084(uVar11,0);
  uVar15 = *(undefined8 *)puVar1;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_CrashContext__Clip_2173674(uVar11);
  }
  else {
    uVar11 = *(undefined8 *)puVar4;
  }
  uVar13 = System_String__Concat_46d30e8(uVar8,uVar13,uVar15,uVar11,0);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar10,0);
  if (lVar10 == 0) goto LAB_0226fec8;
  puVar12 = (undefined8 *)(lVar10 + 0x18);
  *puVar12 = uVar13;
  thunk_FUN_02134474(puVar12,uVar13);
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
  uVar13 = System_Int32__ToString_482d750(&iStack_44,0);
  uVar13 = System_String__Concat_46d2b84(uVar13,*(undefined8 *)puVar3,*puVar12,0);
  *puVar12 = uVar13;
  thunk_FUN_02134474(puVar12,uVar13);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  plVar14 = (long *)(lVar10 + 0x10);
  *plVar14 = **(long **)(lVar7 + 0xb8);
  thunk_FUN_02134474(plVar14);
  puVar3 = PTR_DAT_04cacbe0;
  if (*plVar14 != 0) {
    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar13,lVar10,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_CrashContext__Send_2173340(uVar13);
    return;
  }
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    if (0x3f < *(int *)(lVar7 + 0x20)) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_0226fec8;
      }
      System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                (lVar7,*(undefined8 *)PTR_DAT_04cacbc8);
      lVar10 = *(long *)puVar2;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar10 != 0) {
      System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                (lVar10,*puVar12,*(undefined8 *)PTR_DAT_04cacbd0);
      return;
    }
  }
LAB_0226fec8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

