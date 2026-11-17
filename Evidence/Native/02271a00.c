/* IL2CPP: Dino.BusSand.App.GameApp.<ReleaseThenShow>d__75$$MoveNext
bool Dino_BusSand_App_GameApp__ReleaseThenShow_d__75__MoveNext (Dino_BusSand_App_GameApp__ReleaseThenShow_d__75_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp.<ReleaseThenShow>d__75$$MoveNext
   bool Dino_BusSand_App_GameApp__ReleaseThenShow_d__75__MoveNext
   (Dino_BusSand_App_GameApp__ReleaseThenShow_d__75_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__ReleaseThenShow_d__75__MoveNext_2171a00(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 02271a0c to 02371a1f has its CatchHandler @ 02271aa8 */
                    /* try { // try from 02271a20 to 02371b33 has its CatchHandler @ 022719a0 */
  if ((bRam0000000004f9b8ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab420);
    FUN_02132f7c(PTR_DAT_04cacca0);
    FUN_02132f7c(PTR_DAT_04cacca8);
    FUN_02132f7c(PTR_DAT_04caccb0);
    FUN_02132f7c(PTR_DAT_04caccb8);
    FUN_02132f7c(PTR_DAT_04caccc0);
    bRam0000000004f9b8ab = 1;
  }
  puVar2 = PTR_DAT_04caba50;
                    /* catch() { ... } // from try @ 02271a0c with catch @ 02271aa8 */
  iStack_64 = 0;
  uStack_58 = 0;
  dStack_60 = 0.0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar10 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                    /* catch() { ... } // from try @ 022719fc with catch @ 02271ae4 */
    puVar8 = (undefined8 *)(param_1 + 0x60);
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x58) = uVar10;
    thunk_FUN_02134474(puVar8,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_App_GameApp__ReleaseCaches_2164e04(lVar9,1,0);
    *puVar8 = uVar5;
    thunk_FUN_02134474(puVar8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b943 == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b943 = '\x01';
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    iVar1 = *(int *)(*(long *)(lVar9 + 0xb8) + 0x20);
    if (cRam0000000004f9b944 == '\0') {
      FUN_02132f7c(puVar2);
      lVar9 = *(long *)puVar2;
      cRam0000000004f9b944 = '\x01';
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    *(int *)(*(long *)(lVar9 + 0xb8) + 0x20) = iVar1 + 1;
  }
                    /* catch() { ... } // from try @ 02271ce0 with catch @ 02271bd8
                       catch() { ... } // from try @ 02271da8 with catch @ 02271bd8 */
  if (((*(long *)(param_1 + 0x60) != 0) &&
      (uVar6 = UnityEngine_AsyncOperation__get_isDone_43b7d34(*(long *)(param_1 + 0x60),0),
      (uVar6 & 1) == 0)) &&
     (fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0),
     fVar11 - *(float *)(param_1 + 0x58) < _UNK_00e20094)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  fVar14 = *(float *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b945 == '\0') {
                    /* try { // try from 02271c40 to 02371c4b has its CatchHandler @ 02271dac */
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b945 = '\x01';
  }
  puVar3 = PTR_DAT_04caa038;
  lVar9 = *(long *)puVar2;
                    /* try { // try from 02271c60 to 02371c73 has its CatchHandler @ 02271db0 */
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
                    /* try { // try from 02271c74 to 02371c87 has its CatchHandler @ 02271da8 */
  *(float *)(*(long *)(lVar9 + 0xb8) + 0x24) = (fVar11 - fVar14) * 1000.0;
  Dino_BusSand_App_DeviceMemory__Read_214fafc(&dStack_88,0);
  uStack_58 = uStack_80;
  dStack_60 = dStack_88;
  uStack_48 = uStack_70;
  uStack_50 = uStack_78;
  lVar9 = FUN_02133068(*(undefined8 *)puVar3,9);
  if (lVar9 == 0) goto LAB_02271fbc;
  if (*(int *)(lVar9 + 0x18) == 0) goto LAB_02271fb8;
                    /* try { // try from 02271cb0 to 02371cc3 has its CatchHandler @ 02271dbc */
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04caccc0;
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
                    /* try { // try from 02271cc8 to 02371cdf has its CatchHandler @ 02271dc0 */
  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_02271fb8;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 02271ce0 to 02371d9f has its CatchHandler @ 02271bd8 */
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x28));
  if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_02271fb8;
  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_04caccb8;
  thunk_FUN_02134474();
  if (cRam0000000004f9b946 == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b946 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  fVar11 = *(float *)(*(long *)(lVar7 + 0xb8) + 0x24);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar13 = (double)fVar11;
  dVar12 = (double)FUN_049b52f0(dVar13,&dStack_b0);
  if (0.0 <= fVar11) {
                    /* catch() { ... } // from try @ 02271c40 with catch @ 02271dac */
                    /* catch() { ... } // from try @ 02271c60 with catch @ 02271db0 */
    if (dVar12 == 0.5) {
                    /* catch() { ... } // from try @ 02271da0 with catch @ 02271db8 */
      dVar12 = 1.0;
                    /* catch() { ... } // from try @ 02271cb0 with catch @ 02271dbc */
      goto LAB_02271dc0;
    }
    dStack_b0 = (double)(long)(dVar13 + 0.5);
  }
  else if (dVar12 == -0.5) {
                    /* try { // try from 02271da0 to 02371da7 has its CatchHandler @ 02271db8 */
    dVar12 = -1.0;
                    /* catch() { ... } // from try @ 02271c74 with catch @ 02271da8
                       try { // try from 02271da8 to 02371e43 has its CatchHandler @ 02271bd8 */
LAB_02271dc0:
                    /* catch() { ... } // from try @ 02271cc8 with catch @ 02271dc0 */
    if (((long)dStack_b0 & 1U) != 0) {
      dStack_b0 = dStack_b0 + dVar12;
    }
  }
  else {
    dStack_b0 = (double)(long)(dVar13 + -0.5);
  }
  iStack_64 = -0x80000000;
  if (dStack_b0 != INFINITY) {
    iStack_64 = (int)dStack_b0;
  }
  uVar5 = System_Int32__ToString_482d750(&iStack_64,0);
  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(lVar9 + 0x38) = uVar5;
    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x38),uVar5);
    if (4 < *(uint *)(lVar9 + 0x18)) {
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_04cacca8;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x40));
      uVar5 = System_Int64__ToString_482e7e4(param_1 + 0x30,0);
      if (5 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 02271e74 to 02371ed7 has its CatchHandler @ 02271e74
                       catch() { ... } // from try @ 02271e74 with catch @ 02271e74
                       catch() { ... } // from try @ 02271f4c with catch @ 02271e74
                       catch() { ... } // from try @ 02272008 with catch @ 02271e74 */
        *(undefined8 *)(lVar9 + 0x48) = uVar5;
        thunk_FUN_02134474((undefined8 *)(lVar9 + 0x48),uVar5);
        if (6 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_04caccb0;
          thunk_FUN_02134474((undefined8 *)(lVar9 + 0x50));
          uVar5 = System_Int64__ToString_482e7e4(&dStack_60,0);
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
            *(undefined8 *)(lVar9 + 0x58) = uVar5;
            thunk_FUN_02134474((undefined8 *)(lVar9 + 0x58),uVar5);
            puVar4 = PTR_DAT_04cacca0;
            puVar3 = PTR_DAT_04cac450;
            puVar2 = PTR_DAT_04ca9af8;
                    /* try { // try from 02271ed8 to 02371ee3 has its CatchHandler @ 0227200c */
            if (8 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 02271ee8 to 02371ef7 has its CatchHandler @ 02272008 */
                    /* try { // try from 02271f0c to 02371f4b has its CatchHandler @ 02272014 */
              *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_04cab420;
              thunk_FUN_02134474();
              uVar5 = System_String__Concat_46d31f0(lVar9,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              UnityEngine_Debug__Log_4360fc8(uVar5,0);
                    /* try { // try from 02271f4c to 02371fff has its CatchHandler @ 02271e74 */
              uVar5 = System_String__Concat_46c82e0
                                (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar4,0);
              uStack_a8 = uStack_58;
              dStack_b0 = dStack_60;
              uStack_98 = uStack_48;
              uStack_a0 = uStack_50;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uStack_c8 = uStack_a8;
              dStack_d0 = dStack_b0;
              uStack_b8 = uStack_98;
              uStack_c0 = uStack_a0;
              Dino_BusSand_App_CrashContext__Memory_2172060(uVar5,&dStack_d0);
              lVar9 = *(long *)(param_1 + 0x50);
              if (lVar9 != 0) {
                (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                return 0;
              }
LAB_02271fbc:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
LAB_02271fb8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

