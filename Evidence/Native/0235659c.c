/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$Track
void Dino_BusSand_App_Meta_YachtRacingCore__Track (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t changeType, int32_t fromLevel, int32_t toLevel, int32_t fromRank, int32_t toRank, int32_t isFinal, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$Track
   void Dino_BusSand_App_Meta_YachtRacingCore__Track (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, int32_t changeType, int32_t fromLevel, int32_t toLevel, int32_t fromRank, int32_t toRank,
   int32_t isFinal, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_74;
  int iStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9bff6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb3eb8);
    FUN_02132f7c(PTR_DAT_04cb3ec0);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb3ec8);
    FUN_02132f7c(PTR_DAT_04cb3ed0);
    FUN_02132f7c(PTR_DAT_04cb3ed8);
    FUN_02132f7c(PTR_DAT_04cb3ee0);
    FUN_02132f7c(PTR_DAT_04cb3ee8);
    FUN_02132f7c(PTR_DAT_04cb3ef0);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2bc0);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd0);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    FUN_02132f7c(PTR_DAT_04cb2be0);
    FUN_02132f7c(PTR_DAT_04cb2be8);
    FUN_02132f7c(PTR_DAT_04cb1ee0);
    bRam0000000004f9bff6 = 1;
  }
  puVar6 = PTR_DAT_04caa200;
  puVar5 = PTR_DAT_04ca9c20;
  uStack_64 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar13 = 0;
    uStack_64 = 0;
  }
  else {
    fVar14 = *(float *)(*(long *)(param_1 + 0x58) + 0x80);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b890 = '\x01';
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = System_Math__Round_48312e4((double)fVar14,2,0,0);
    uStack_64 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      uStack_64 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x84);
    }
  }
  lVar7 = System_Int32__ToString_482d750(&uStack_64,0);
  plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar5,0x1e);
  puVar5 = PTR_DAT_04cb2b28;
  if (plVar8 == (long *)0x0) goto LAB_02357098;
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar8 + 0x40)),
     lVar9 == 0)) goto LAB_0235708c;
  puVar6 = PTR_DAT_04cb3ee8;
  if ((int)plVar8[3] == 0) goto LAB_02357088;
  plVar8[4] = *(long *)puVar5;
  thunk_FUN_02134474();
  lVar9 = *(long *)puVar6;
  if ((lVar9 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
  puVar5 = PTR_DAT_04cb2b30;
  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_02357088;
                    /* try { // try from 02356808 to 02456913 has its CatchHandler @ 02356808
                       catch() { ... } // from try @ 02356808 with catch @ 02356808
                       catch() { ... } // from try @ 02356d78 with catch @ 02356808
                       catch() { ... } // from try @ 02356dfc with catch @ 02356808
                       catch() { ... } // from try @ 02356e44 with catch @ 02356808
                       catch() { ... } // from try @ 02356e84 with catch @ 02356808
                       catch() { ... } // from try @ 02356ebc with catch @ 02356808
                       catch() { ... } // from try @ 02356f08 with catch @ 02356808 */
  plVar8[5] = *(long *)puVar6;
  thunk_FUN_02134474();
  lVar9 = *(long *)puVar5;
  if ((lVar9 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
  if (*(uint *)(plVar8 + 3) < 3) goto LAB_02357088;
  plVar8[6] = *(long *)puVar5;
  thunk_FUN_02134474();
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) goto LAB_02357098;
  iStack_68 = *(int *)(lVar9 + 0x84);
  if (iStack_68 == 0) {
    iStack_68 = 1;
    *(undefined4 *)(lVar9 + 0x84) = 1;
  }
  puVar5 = PTR_DAT_04ca9ac8;
  lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_68);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_0235708c;
  puVar6 = PTR_DAT_04cb2bb0;
  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_02357088;
  plVar8[7] = lVar9;
  thunk_FUN_02134474(plVar8 + 7,lVar9);
  lVar9 = *(long *)puVar6;
  if ((lVar9 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
  if (*(uint *)(plVar8 + 3) < 5) goto LAB_02357088;
  plVar8[8] = *(long *)puVar6;
  thunk_FUN_02134474();
  uStack_74 = param_2;
  lVar9 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_74);
                    /* try { // try from 02356914 to 0245692f has its CatchHandler @ 02356e04 */
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_0235708c;
  puVar6 = PTR_DAT_04cb3ee0;
  if (*(uint *)(plVar8 + 3) < 6) goto LAB_02357088;
  plVar8[9] = lVar9;
  thunk_FUN_02134474(plVar8 + 9,lVar9);
  lVar9 = *(long *)puVar6;
  if ((lVar9 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
                    /* try { // try from 02356960 to 02456967 has its CatchHandler @ 02356d98 */
  if (*(uint *)(plVar8 + 3) < 7) goto LAB_02357088;
  plVar8[10] = *(long *)puVar6;
  thunk_FUN_02134474();
  uStack_80 = uVar13;
  lVar9 = FUN_02133100(*(undefined8 *)(puVar5 + 0x80),&uStack_80);
                    /* try { // try from 02356990 to 024569d3 has its CatchHandler @ 02356dac */
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_0235708c;
  puVar6 = PTR_DAT_04cb3ed8;
  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) == 0) goto LAB_02357088;
  plVar8[0xb] = lVar9;
  thunk_FUN_02134474(plVar8 + 0xb,lVar9);
  lVar9 = *(long *)puVar6;
  if ((lVar9 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
  if (*(uint *)(plVar8 + 3) < 9) goto LAB_02357088;
  plVar8[0xc] = *(long *)puVar6;
                    /* try { // try from 023569f4 to 024569fb has its CatchHandler @ 02356d94 */
  thunk_FUN_02134474();
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
  goto LAB_0235708c;
  puVar6 = PTR_DAT_04cb3eb8;
  if (*(uint *)(plVar8 + 3) < 10) goto LAB_02357088;
                    /* try { // try from 02356a1c to 02456a23 has its CatchHandler @ 02356d88 */
  plVar8[0xd] = lVar7;
  thunk_FUN_02134474(plVar8 + 0xd,lVar7);
  lVar7 = *(long *)puVar6;
                    /* try { // try from 02356a44 to 02456a63 has its CatchHandler @ 02356db8 */
  if ((lVar7 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
  goto LAB_0235708c;
  if (*(uint *)(plVar8 + 3) < 0xb) goto LAB_02357088;
  plVar8[0xe] = *(long *)puVar6;
  thunk_FUN_02134474();
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_02357098;
  iVar2 = *(int *)(lVar7 + 0x78);
  if (iVar2 == 1) {
                    /* try { // try from 02356a9c to 02456adf has its CatchHandler @ 02356d90 */
    puVar12 = (uint *)(lVar7 + 0x8c);
LAB_02356aa0:
    uVar3 = *puVar12;
    uVar1 = uVar3;
    if (uVar3 < 2) {
      uVar1 = 1;
    }
    uStack_84 = 0;
    if (-1 < (int)uVar3) {
      uStack_84 = uVar1;
    }
  }
  else {
                    /* try { // try from 02356a7c to 02456a87 has its CatchHandler @ 02356d84 */
    if (iVar2 == 2) {
      puVar12 = (uint *)(lVar7 + 0x90);
      goto LAB_02356aa0;
    }
    if (iVar2 == 3) {
      puVar12 = (uint *)(lVar7 + 0x94);
      goto LAB_02356aa0;
    }
    uStack_84 = 0;
  }
  lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_84);
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_0235708c:
    uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar13,0);
  }
  puVar6 = PTR_DAT_04cb2be0;
  if (0xb < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356b04 to 02456b0b has its CatchHandler @ 02356d80 */
    plVar8[0xf] = lVar7;
    thunk_FUN_02134474(plVar8 + 0xf,lVar7);
    lVar7 = *(long *)puVar6;
                    /* try { // try from 02356b18 to 02456b1f has its CatchHandler @ 02356d7c */
    if ((lVar7 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
    goto LAB_0235708c;
    if (0xc < *(uint *)(plVar8 + 3)) {
      plVar8[0x10] = *(long *)puVar6;
      thunk_FUN_02134474();
                    /* try { // try from 02356b40 to 02456b5f has its CatchHandler @ 02356d8c */
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02357098;
      uStack_88 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x7c);
      lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_88);
      if ((lVar7 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0235708c;
      puVar6 = PTR_DAT_04cb2bc0;
                    /* try { // try from 02356b7c to 02456b87 has its CatchHandler @ 02356d78 */
      if (0xd < *(uint *)(plVar8 + 3)) {
        plVar8[0x11] = lVar7;
        thunk_FUN_02134474(plVar8 + 0x11,lVar7);
        lVar7 = *(long *)puVar6;
        if ((lVar7 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
        goto LAB_0235708c;
        if (0xe < *(uint *)(plVar8 + 3)) {
          plVar8[0x12] = *(long *)puVar6;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02357098;
          uStack_8c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78);
          lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_8c);
                    /* try { // try from 02356bfc to 02456c23 has its CatchHandler @ 02356e08 */
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_0235708c;
          puVar6 = PTR_DAT_04cb1ee0;
          if ((*(uint *)(plVar8 + 3) & 0xfffffff0) != 0) {
            plVar8[0x13] = lVar7;
            thunk_FUN_02134474(plVar8 + 0x13,lVar7);
            lVar7 = *(long *)puVar6;
            if ((lVar7 != 0) &&
               (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
            goto LAB_0235708c;
            if (0x10 < *(uint *)(plVar8 + 3)) {
              plVar8[0x14] = *(long *)puVar6;
              thunk_FUN_02134474();
                    /* try { // try from 02356c64 to 02456c8b has its CatchHandler @ 02356e48 */
              uStack_90 = param_3;
              lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_90);
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0235708c;
              puVar6 = PTR_DAT_04cb3ef0;
              if (0x11 < *(uint *)(plVar8 + 3)) {
                plVar8[0x15] = lVar7;
                thunk_FUN_02134474(plVar8 + 0x15,lVar7);
                lVar7 = *(long *)puVar6;
                if ((lVar7 != 0) &&
                   (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
                goto LAB_0235708c;
                if (0x12 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356cd8 to 02456cff has its CatchHandler @ 02356e88 */
                  plVar8[0x16] = *(long *)puVar6;
                  thunk_FUN_02134474();
                  uStack_94 = param_4;
                  lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_94);
                  if ((lVar7 != 0) &&
                     (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)
                     ) goto LAB_0235708c;
                  puVar6 = PTR_DAT_04cb3ed0;
                  if (0x13 < *(uint *)(plVar8 + 3)) {
                    plVar8[0x17] = lVar7;
                    thunk_FUN_02134474(plVar8 + 0x17,lVar7);
                    lVar7 = *(long *)puVar6;
                    /* try { // try from 02356d38 to 02456d3b has its CatchHandler @ 02356d9c */
                    /* try { // try from 02356d3c to 02456d3f has its CatchHandler @ 02356e88 */
                    /* try { // try from 02356d40 to 02456d43 has its CatchHandler @ 02356e48 */
                    /* try { // try from 02356d44 to 02456d4b has its CatchHandler @ 02356e08 */
                    if ((lVar7 != 0) &&
                       (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar7 == 0)) goto LAB_0235708c;
                    /* try { // try from 02356d4c to 02456d5f has its CatchHandler @ 02356db8 */
                    if (0x14 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356d60 to 02456d63 has its CatchHandler @ 02356d90 */
                      plVar8[0x18] = *(long *)puVar6;
                    /* try { // try from 02356d64 to 02456d77 has its CatchHandler @ 02356d8c */
                      thunk_FUN_02134474();
                      uStack_98 = param_5;
                      lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_98);
                    /* catch() { ... } // from try @ 02356b7c with catch @ 02356d78
                       try { // try from 02356d78 to 02456dd7 has its CatchHandler @ 02356808 */
                    /* catch() { ... } // from try @ 02356b18 with catch @ 02356d7c */
                    /* catch() { ... } // from try @ 02356b04 with catch @ 02356d80 */
                    /* catch() { ... } // from try @ 02356a7c with catch @ 02356d84 */
                    /* catch() { ... } // from try @ 02356a1c with catch @ 02356d88 */
                    /* catch() { ... } // from try @ 02356b40 with catch @ 02356d8c
                       catch() { ... } // from try @ 02356d64 with catch @ 02356d8c */
                    /* catch() { ... } // from try @ 02356a9c with catch @ 02356d90
                       catch() { ... } // from try @ 02356d60 with catch @ 02356d90 */
                      if ((lVar7 != 0) &&
                         (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_0235708c;
                      puVar6 = PTR_DAT_04cb3ec8;
                    /* catch() { ... } // from try @ 023569f4 with catch @ 02356d94 */
                    /* catch() { ... } // from try @ 02356960 with catch @ 02356d98 */
                    /* catch() { ... } // from try @ 02356d38 with catch @ 02356d9c */
                      if (0x15 < *(uint *)(plVar8 + 3)) {
                    /* catch() { ... } // from try @ 02356990 with catch @ 02356dac */
                        plVar8[0x19] = lVar7;
                        thunk_FUN_02134474(plVar8 + 0x19,lVar7);
                    /* catch() { ... } // from try @ 02356a44 with catch @ 02356db8
                       catch() { ... } // from try @ 02356d4c with catch @ 02356db8 */
                        lVar7 = *(long *)puVar6;
                        if ((lVar7 != 0) &&
                           (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar7 == 0)) goto LAB_0235708c;
                    /* try { // try from 02356dd8 to 02456ddb has its CatchHandler @ 02356dec */
                        if (0x16 < *(uint *)(plVar8 + 3)) {
                          plVar8[0x1a] = *(long *)puVar6;
                          thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 02356dd8 with catch @ 02356dec */
                          uStack_9c = param_6;
                    /* try { // try from 02356df4 to 02456dfb has its CatchHandler @ 02356f10 */
                          lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_9c);
                    /* try { // try from 02356dfc to 02456e27 has its CatchHandler @ 02356808 */
                    /* catch() { ... } // from try @ 02356914 with catch @ 02356e04 */
                    /* catch() { ... } // from try @ 02356bfc with catch @ 02356e08
                       catch() { ... } // from try @ 02356d44 with catch @ 02356e08 */
                          if ((lVar7 != 0) &&
                             (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar9 == 0)) goto LAB_0235708c;
                          puVar6 = PTR_DAT_04cb2be8;
                          if (0x17 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356e28 to 02456e2b has its CatchHandler @ 02356e34 */
                    /* catch() { ... } // from try @ 02356e28 with catch @ 02356e34 */
                            plVar8[0x1b] = lVar7;
                            thunk_FUN_02134474(plVar8 + 0x1b,lVar7);
                    /* try { // try from 02356e3c to 02456e43 has its CatchHandler @ 02356f10 */
                            lVar7 = *(long *)puVar6;
                    /* try { // try from 02356e44 to 02456e67 has its CatchHandler @ 02356808 */
                    /* catch() { ... } // from try @ 02356c64 with catch @ 02356e48
                       catch() { ... } // from try @ 02356d40 with catch @ 02356e48 */
                            if ((lVar7 != 0) &&
                               (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar7 == 0)) goto LAB_0235708c;
                            if (0x18 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356e68 to 02456e6b has its CatchHandler @ 02356e74 */
                              plVar8[0x1c] = *(long *)puVar6;
                              thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 02356e68 with catch @ 02356e74 */
                              if (*(long *)(param_1 + 0x10) == 0) goto LAB_02357098;
                              uStack_a0 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x88);
                    /* try { // try from 02356e7c to 02456e83 has its CatchHandler @ 02356f10 */
                    /* try { // try from 02356e84 to 02456eb7 has its CatchHandler @ 02356808 */
                    /* catch() { ... } // from try @ 02356cd8 with catch @ 02356e88
                       catch() { ... } // from try @ 02356d3c with catch @ 02356e88 */
                              lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_a0);
                              if ((lVar7 != 0) &&
                                 (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                                 lVar9 == 0)) goto LAB_0235708c;
                              puVar6 = PTR_DAT_04cb2bd8;
                              if (0x19 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356eb8 to 02456ebb has its CatchHandler @ 02356f00 */
                    /* try { // try from 02356ebc to 02456eef has its CatchHandler @ 02356808 */
                                plVar8[0x1d] = lVar7;
                                thunk_FUN_02134474(plVar8 + 0x1d,lVar7);
                                lVar7 = *(long *)puVar6;
                                if ((lVar7 != 0) &&
                                   (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)
                                                              ), lVar7 == 0)) goto LAB_0235708c;
                                if (0x1a < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02356ef0 to 02456eff has its CatchHandler @ 02356f00 */
                                  plVar8[0x1e] = *(long *)puVar6;
                                  thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 02356eb8 with catch @ 02356f00
                       catch() { ... } // from try @ 02356ef0 with catch @ 02356f00 */
                                  lVar7 = *(long *)(param_1 + 0x20);
                    /* try { // try from 02356f04 to 02456f07 has its CatchHandler @ 02356f10 */
                                  if (lVar7 != 0) {
                    /* try { // try from 02356f08 to 02456f13 has its CatchHandler @ 02356808 */
                    /* catch() { ... } // from try @ 02356df4 with catch @ 02356f10
                       catch() { ... } // from try @ 02356e3c with catch @ 02356f10
                       catch() { ... } // from try @ 02356e7c with catch @ 02356f10
                       catch() { ... } // from try @ 02356f04 with catch @ 02356f10 */
                                    lVar9 = *(long *)(param_1 + 0x10);
                                    lVar7 = (**(code **)(lVar7 + 0x18))
                                                      (*(undefined8 *)(lVar7 + 0x40),
                                                       *(undefined8 *)(lVar7 + 0x28));
                                    if (lVar9 != 0) {
                                      uVar11 = Dino_BusSand_App_Meta_YachtRacingData__IsValid_2255404
                                                         (lVar9,lVar7);
                                      if ((uVar11 & 1) == 0) {
                                        iStack_a4 = 0;
                                      }
                                      else {
                                        auVar4 = SEXT816(*(long *)(lVar9 + 0x70) - lVar7) *
                                                 SEXT816(0x20c49ba5e353f7cf);
                                        iStack_a4 = (int)(auVar4._8_8_ >> 7) -
                                                    (auVar4._12_4_ >> 0x1f);
                                      }
                                      lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&iStack_a4
                                                          );
                    /* try { // try from 02356f80 to 02457007 has its CatchHandler @ 02356f80
                       catch() { ... } // from try @ 02356f80 with catch @ 02356f80
                       catch() { ... } // from try @ 023571d4 with catch @ 02356f80
                       catch() { ... } // from try @ 023571f0 with catch @ 02356f80
                       catch() { ... } // from try @ 02357274 with catch @ 02356f80
                       catch() { ... } // from try @ 023572a0 with catch @ 02356f80
                       catch() { ... } // from try @ 023572ec with catch @ 02356f80 */
                                      if ((lVar7 != 0) &&
                                         (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)
                                                                            (*plVar8 + 0x40)),
                                         lVar9 == 0)) goto LAB_0235708c;
                                      puVar6 = PTR_DAT_04cb2bd0;
                                      if (0x1b < *(uint *)(plVar8 + 3)) {
                                        plVar8[0x1f] = lVar7;
                                        thunk_FUN_02134474(plVar8 + 0x1f,lVar7);
                                        lVar7 = *(long *)puVar6;
                                        if ((lVar7 != 0) &&
                                           (lVar7 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)
                                                                              (*plVar8 + 0x40)),
                                           lVar7 == 0)) goto LAB_0235708c;
                                        if (0x1c < *(uint *)(plVar8 + 3)) {
                                          plVar8[0x20] = *(long *)puVar6;
                                          thunk_FUN_02134474(plVar8 + 0x20);
                                          uStack_a8 = param_7;
                                          lVar7 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),
                                                               &uStack_a8);
                    /* try { // try from 02357008 to 0245700f has its CatchHandler @ 02357208 */
                                          if ((lVar7 != 0) &&
                                             (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)
                                                                                (*plVar8 + 0x40)),
                                             lVar9 == 0)) goto LAB_0235708c;
                                          puVar6 = PTR_DAT_04cb3ec0;
                                          puVar5 = PTR_DAT_04cac5c0;
                    /* try { // try from 02357020 to 02457027 has its CatchHandler @ 02357204 */
                                          if (0x1d < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 02357028 to 0245703b has its CatchHandler @ 02357214 */
                                            plVar8[0x21] = lVar7;
                                            thunk_FUN_02134474(plVar8 + 0x21,lVar7);
                    /* try { // try from 0235704c to 02457057 has its CatchHandler @ 02357210 */
                                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                    /* try { // try from 0235705c to 02457067 has its CatchHandler @ 02357200 */
                                            Dino_BusSand_App_Analytics__Log_216d0c8
                                                      (*(undefined8 *)puVar6,plVar8,0);
                    /* try { // try from 02357078 to 0245708b has its CatchHandler @ 0235720c */
                                            return;
                                          }
                                        }
                                      }
                                      goto LAB_02357088;
                                    }
                                  }
LAB_02357098:
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02357088:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

