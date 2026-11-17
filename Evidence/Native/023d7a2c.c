/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Wind
void Dino_BusSand_App_UI_HomeAtelier__Wind (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Wind
   void Dino_BusSand_App_UI_HomeAtelier__Wind (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Wind_22d7a2c(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  if ((bRam0000000004f9c3d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3d7 = 1;
  }
  fVar23 = *(float *)(param_2 + 0xec);
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  if (*(float *)(param_2 + 0xcc) <= fVar23) {
    plVar10 = *(long **)(param_2 + 0xf0);
    if (plVar10 == (long *)0x0) goto LAB_023d7ef8;
    dVar20 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    fVar18 = _UNK_00e2094c;
    plVar10 = *(long **)(param_2 + 0xf0);
    *(float *)(param_2 + 0x120) = fVar23;
    *(float *)(param_2 + 0xd0) = (float)dVar20 * fVar18 + _UNK_00e20994;
    if (plVar10 == (long *)0x0) goto LAB_023d7ef8;
    dVar20 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    *(float *)(param_2 + 0xcc) = fVar23 + (float)dVar20 * 5.0 + 7.0;
    if ((*(char *)(param_2 + 0xf8) == '\0') && (*(char *)(param_2 + 0xd4) == '\0')) {
      plVar10 = *(long **)(param_2 + 0xf0);
      if (plVar10 == (long *)0x0) goto LAB_023d7ef8;
                    /* try { // try from 023d7b50 to 024d7cfb has its CatchHandler @ 023d7b50
                       catch() { ... } // from try @ 023d7b50 with catch @ 023d7b50
                       catch() { ... } // from try @ 023d7e40 with catch @ 023d7b50
                       catch() { ... } // from try @ 023d7e94 with catch @ 023d7b50
                       catch() { ... } // from try @ 023d7ed4 with catch @ 023d7b50
                       catch() { ... } // from try @ 023d7f00 with catch @ 023d7b50 */
      dVar20 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      puVar7 = PTR_DAT_04cad568;
      if ((float)dVar20 < 0.5) {
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar11 = *(long *)puVar7;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar7;
        }
        if (**(long **)(lVar11 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Paper_2385674
                    (_UNK_00e20aec,_UNK_00e1fea8,**(long **)(lVar11 + 0xb8),0);
        }
      }
    }
    if (*(long *)(param_2 + 0x100) != 0) {
      Dino_BusSand_App_UI_HomeStage__Gust_22efa70(_UNK_00e20868,*(long *)(param_2 + 0x100),0);
    }
  }
  if ((*(long *)(param_2 + 0x78) != 0) &&
     (lVar11 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                         (*(long *)(param_2 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
     puVar8 = PTR_DAT_04cb6ec0, puVar7 = PTR_DAT_04cb6eb8, lVar11 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_b8,lVar11,*(undefined8 *)PTR_DAT_04cb6ed0);
    fVar6 = _UNK_00e2086c;
    fVar5 = _UNK_00e2082c;
    fVar4 = _UNK_00e20754;
    fVar3 = _UNK_00e20274;
    fVar2 = _UNK_00e20124;
    fVar1 = _UNK_00e200f8;
    fVar19 = _UNK_00e200b4;
    fVar22 = _UNK_00e200a8;
    fVar18 = _UNK_00e20094;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    fVar13 = fVar23 * _UNK_00e20334;
    puStack_b0 = &uStack_a0;
    lStack_90 = lStack_a8;
    uStack_b8 = 0;
    fVar14 = fVar23 * _UNK_00e1ff68;
    while (uVar12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                              (&uStack_a0,*(undefined8 *)puVar8), lVar11 = lStack_90,
          (uVar12 & 1) != 0) {
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_90 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023d7ed0 with catch @ 023d7ef4 */
        FUN_02133224();
      }
                    /* try { // try from 023d7cfc to 024d7d03 has its CatchHandler @ 023d7ea8 */
      fVar15 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828
                                (*(long *)(lStack_90 + 0x18),0);
      fVar16 = (float)UnityEngine_Mathf__PerlinNoise_43afc78
                                (fVar13 + *(float *)(lVar11 + 0x80) * 10.0,
                                 *(float *)(lVar11 + 0x80) * 3.0,0);
                    /* try { // try from 023d7d30 to 024d7d8f has its CatchHandler @ 023d7eac */
      fVar17 = 0.0;
      fVar15 = ((fVar23 - *(float *)(param_2 + 0x120)) + (fVar15 + 700.0) / fVar2) / 0.75;
      bVar9 = false;
      if ((0.0 < fVar15) && (bVar9 = false, !NAN(fVar15))) {
        bVar9 = fVar15 < 1.0;
      }
      if (bVar9) {
        fVar24 = *(float *)(param_2 + 0xd0);
        fVar17 = (float)func_0x049b5320(fVar15 * fVar5);
        fVar17 = fVar17 * fVar24 * fVar19;
      }
                    /* try { // try from 023d7d94 to 024d7d9f has its CatchHandler @ 023d7e9c */
      fVar15 = (fVar16 + -0.5) * fVar4;
                    /* try { // try from 023d7db0 to 024d7db3 has its CatchHandler @ 023d7e98 */
                    /* try { // try from 023d7db4 to 024d7dbf has its CatchHandler @ 023d7ea0 */
                    /* try { // try from 023d7dc4 to 024d7dcf has its CatchHandler @ 023d7ea4 */
      fVar24 = *(float *)(lVar11 + 0x74) +
               (((fVar15 + fVar15 + fVar17) - *(float *)(lVar11 + 0x70)) * 30.0 +
               *(float *)(lVar11 + 0x74) * fVar6) * param_1;
      fVar16 = *(float *)(lVar11 + 0x70) + fVar24 * param_1;
      fVar15 = fVar1;
      if (fVar16 <= fVar1) {
        fVar15 = fVar16;
      }
                    /* try { // try from 023d7dd8 to 024d7e3f has its CatchHandler @ 023d7eb4 */
      fVar21 = fVar22;
      if (fVar22 <= fVar16) {
        fVar21 = fVar15;
      }
      *(float *)(lVar11 + 0x70) = fVar21;
      *(float *)(lVar11 + 0x74) = fVar24;
      fVar15 = (float)UnityEngine_Mathf__PerlinNoise_43afc78
                                (*(float *)(lVar11 + 0x80) * 5.0,fVar14,0);
      fVar15 = (fVar15 + -0.5) * fVar18;
      fVar16 = *(float *)(lVar11 + 0x7c) +
               (((fVar17 * fVar3 + fVar15 + fVar15) - *(float *)(lVar11 + 0x78)) * 40.0 +
               *(float *)(lVar11 + 0x7c) * -4.0) * param_1;
      fVar17 = *(float *)(lVar11 + 0x78) + fVar16 * param_1;
      fVar15 = 4.0;
      if (fVar17 <= 4.0) {
        fVar15 = fVar17;
      }
                    /* try { // try from 023d7e40 to 024d7e8f has its CatchHandler @ 023d7b50 */
      fVar24 = -4.0;
      if (-4.0 <= fVar17) {
        fVar24 = fVar15;
      }
      *(float *)(lVar11 + 0x78) = fVar24;
      *(float *)(lVar11 + 0x7c) = fVar16;
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_a0,*(undefined8 *)puVar7);
    plVar10 = *(long **)(param_2 + 0x38);
    if (plVar10 != (long *)0x0) {
      fVar22 = *(float *)((long)plVar10 + 0xec);
      fVar18 = (float)expf(param_1 * -5.0);
      fVar18 = 1.0 - fVar18;
      fVar23 = 1.0;
      if (fVar18 <= 1.0) {
        fVar23 = fVar18;
      }
      fVar19 = 0.0;
                    /* try { // try from 023d7e90 to 024d7e93 has its CatchHandler @ 023d7eb0 */
      if (0.0 <= fVar18) {
        fVar19 = fVar23;
      }
                    /* try { // try from 023d7e94 to 024d7ecf has its CatchHandler @ 023d7b50 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7db0 with catch @ 023d7e98
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7d94 with catch @ 023d7e9c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7db4 with catch @ 023d7ea0
                        */
      fVar23 = fVar22 + fVar19 * (0.0 - fVar22);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7dc4 with catch @ 023d7ea4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7cfc with catch @ 023d7ea8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7d30 with catch @ 023d7eac
                        */
      if (_UNK_00e20448 < ABS(fVar23 - fVar22)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7e90 with catch @ 023d7eb0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d7dd8 with catch @ 023d7eb4
                        */
        *(float *)((long)plVar10 + 0xec) = fVar23;
        (**(code **)(*plVar10 + 0x2f8))(plVar10,*(undefined8 *)(*plVar10 + 0x300));
      }
                    /* try { // try from 023d7ed0 to 024d7ed3 has its CatchHandler @ 023d7ef4 */
                    /* try { // try from 023d7ed4 to 024d7ef7 has its CatchHandler @ 023d7b50 */
      return;
    }
  }
LAB_023d7ef8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023d7ef8 to 024d7eff has its CatchHandler @ 023d7f08 */
  FUN_02133224();
}

