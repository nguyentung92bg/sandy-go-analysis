/* IL2CPP: Dino.BusSand.View.WorldView$$BuildRoad
void Dino_BusSand_View_WorldView__BuildRoad (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$BuildRoad
   void Dino_BusSand_View_WorldView__BuildRoad (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__BuildRoad_2403c34(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  double dVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  if ((bRam0000000004f9cb1b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbe168);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbe170);
    FUN_02132f7c(PTR_DAT_04cbe178);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04cbe180);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbc5b8);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbe188);
    FUN_02132f7c(PTR_DAT_04cbe0c8);
    FUN_02132f7c(PTR_DAT_04cbd180);
    FUN_02132f7c(PTR_DAT_04cbe190);
    FUN_02132f7c(PTR_DAT_04cbe198);
    FUN_02132f7c(PTR_DAT_04cbe1a0);
    FUN_02132f7c(PTR_DAT_04cbcf60);
    FUN_02132f7c(PTR_DAT_04cbd188);
    FUN_02132f7c(PTR_DAT_04cbd190);
    FUN_02132f7c(PTR_DAT_04cbd198);
    FUN_02132f7c(PTR_DAT_04cbe1a8);
    FUN_02132f7c(PTR_DAT_04cbda18);
    FUN_02132f7c(PTR_DAT_04cbd1a0);
    FUN_02132f7c(PTR_DAT_04cb76e0);
    FUN_02132f7c(PTR_DAT_04cbe1b0);
    FUN_02132f7c(PTR_DAT_04cbe1b8);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04cbd1a8);
    FUN_02132f7c(PTR_DAT_04cbe1c0);
    bRam0000000004f9cb1b = 1;
  }
  puVar9 = PTR_DAT_04cbc2b8;
  puVar6 = PTR_DAT_04cb6dd0;
  lVar25 = *(long *)(param_1 + 0x20);
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  if (lVar25 != 0) {
    lVar15 = *(long *)PTR_DAT_04cbc2b8;
    fVar41 = *(float *)(lVar25 + 0xcc);
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar9;
    }
    puVar9 = PTR_DAT_04cbe188;
    lVar15 = *(long *)(lVar15 + 0xb8);
    uVar30 = *(undefined4 *)(lVar15 + 0x34);
    uVar34 = *(undefined4 *)(lVar15 + 0x38);
    uVar36 = *(undefined4 *)(lVar15 + 0x3c);
    uVar39 = *(undefined4 *)(lVar15 + 0x40);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar15 = Dino_BusSand_View_MaterialLibrary__Ground_23ba8c8
                       (uVar30,uVar34,uVar36,uVar39,*(undefined8 *)puVar9,0,0);
    puVar13 = PTR_DAT_04cbe1c0;
    puVar12 = PTR_DAT_04cbe178;
    puVar11 = PTR_DAT_04cbe168;
    puVar10 = PTR_DAT_04cbd198;
    puVar8 = PTR_DAT_04cbd188;
    puVar7 = PTR_DAT_04cbc5b8;
    puVar9 = PTR_DAT_04cb76e0;
    puVar6 = PTR_DAT_04caa170;
    if (lVar15 != 0) {
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar15,*(undefined8 *)PTR_DAT_04cbd1a8,0);
                    /* try { // try from 02503ed8 to 026040ab has its CatchHandler @ 02503ed8
                       catch() { ... } // from try @ 02503ed8 with catch @ 02503ed8
                       catch() { ... } // from try @ 02504104 with catch @ 02503ed8
                       catch() { ... } // from try @ 0250415c with catch @ 02503ed8
                       catch() { ... } // from try @ 0250418c with catch @ 02503ed8
                       catch() { ... } // from try @ 025041b8 with catch @ 02503ed8 */
      UnityEngine_Material__SetColor_43830b0
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar15,*(undefined8 *)puVar13,0);
      uVar30 = _UNK_00e204d0;
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e204d0,_UNK_00e204d0,0x3f800000,0x3f800000,lVar15,*(undefined8 *)puVar10,0);
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar15,*(undefined8 *)puVar8,0);
      uVar34 = _UNK_00e20590;
      UnityEngine_Material__SetFloat_4383048(_UNK_00e20590,lVar15,*(undefined8 *)PTR_DAT_04cbd180,0)
      ;
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e205fc,_UNK_00e2067c,uVar30,0x3f800000,lVar15,
                 *(undefined8 *)PTR_DAT_04cbd190,0);
      UnityEngine_Material__SetFloat_4383048(_UNK_00e20af8,lVar15,*(undefined8 *)puVar9,0);
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e1ff28,_UNK_00e2023c,_UNK_00e20ad0,0x3f800000,lVar15,
                 *(undefined8 *)PTR_DAT_04caa108,0);
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar15,*(undefined8 *)PTR_DAT_04cbd1a0,0);
      lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe180);
      System_Collections_Generic_List_ValueTuple_Vector3__float__float_____ctor_39d8fc8
                (lVar16,*(undefined8 *)PTR_DAT_04cbe170);
      puVar9 = PTR_DAT_04cbc2b8;
      dVar5 = _UNK_00e69c40;
      fVar32 = _UNK_00e20660;
      iVar1 = *(int *)(lVar25 + 0xe8);
      iVar2 = *(int *)(lVar25 + 0xec);
      iVar19 = 0;
      dVar38 = (double)iVar1;
      do {
        dVar33 = (((double)((iVar2 + iVar1) * 2) - dVar38) * (double)iVar19) / dVar5 + dVar38;
        Dino_BusSand_View_StageLayout__RoadPose_23e8aec(dVar33,lVar25,&uStack_d0,&uStack_d4,0);
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        System_ValueTuple_Vector3__float__float____ctor_3110ad4
                  (uStack_d0 & 0xffffffff,uStack_d0._4_4_,uStack_c8,uStack_d4,
                   (float)((dVar33 * (double)*(float *)(lVar25 + 0x5c)) /
                          (double)(*(float *)(lVar25 + 0x60) * fVar32)),&uStack_e8,
                   *(undefined8 *)puVar7);
        if (lVar16 == 0) goto LAB_0250499c;
        lVar20 = *(long *)(lVar16 + 0x10);
        lVar23 = *(long *)puVar11;
                    /* try { // try from 025040ac to 026040b3 has its CatchHandler @ 02504168 */
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_0250499c;
        uVar3 = *(uint *)(lVar16 + 0x18);
        if (uVar3 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar3 * 0x14;
                    /* try { // try from 025040d4 to 026040d7 has its CatchHandler @ 02504160 */
          *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                    /* try { // try from 025040d8 to 02604103 has its CatchHandler @ 0250416c */
          *(undefined4 *)(lVar20 + 0x30) = uStack_d8;
          *(undefined8 *)(lVar20 + 0x28) = uStack_e0;
          *(undefined8 *)(lVar20 + 0x20) = uStack_e8;
        }
        else {
          uStack_b8 = uStack_e0;
          uStack_c0 = uStack_e8;
                    /* try { // try from 02504104 to 02604157 has its CatchHandler @ 02503ed8 */
          uStack_b0 = uStack_d8;
          System_Collections_Generic_List_ValueTuple_Vector3__float__float____AddWithResize_39d98d0
                    (lVar16,&uStack_c0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0xdd);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = Dino_BusSand_View_WorldView__Ribbon_2407640(fVar41,lVar16);
      lVar20 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                         (param_1,*(undefined8 *)PTR_DAT_04cbda18,uVar17,lVar15,0,1);
                    /* try { // try from 02504158 to 0260415b has its CatchHandler @ 02504164 */
                    /* try { // try from 0250415c to 02604187 has its CatchHandler @ 02503ed8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025040d4 with catch @ 02504160
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02504158 with catch @ 02504164
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025040ac with catch @ 02504168
                        */
      if ((lVar20 != 0) &&
         (lVar20 = UnityEngine_Component__get_transform_43bcd18(lVar20,0), lVar20 != 0)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025040d8 with catch @ 0250416c
                        */
        UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20488,0,lVar20,0);
                    /* try { // try from 02504188 to 0260418b has its CatchHandler @ 025041ac */
                    /* try { // try from 0250418c to 026041af has its CatchHandler @ 02503ed8 */
        lVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe180);
        System_Collections_Generic_List_ValueTuple_Vector3__float__float_____ctor_39d8fc8
                  (lVar20,*(undefined8 *)PTR_DAT_04cbe170);
                    /* catch() { ... } // from try @ 02504188 with catch @ 025041ac */
                    /* try { // try from 025041b0 to 026041b7 has its CatchHandler @ 025041c0 */
                    /* try { // try from 025041b8 to 026041c3 has its CatchHandler @ 02503ed8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025041b0 with catch @ 025041c0
                        */
                    /* try { // try from 025041c4 to 0260428f has its CatchHandler @ 025041c4
                       catch() { ... } // from try @ 025041c4 with catch @ 025041c4
                       catch() { ... } // from try @ 025042b4 with catch @ 025041c4
                       catch() { ... } // from try @ 025042e0 with catch @ 025041c4
                       catch() { ... } // from try @ 0250430c with catch @ 025041c4
                       catch() { ... } // from try @ 02504338 with catch @ 025041c4 */
        iVar19 = 0;
        fVar37 = *(float *)(lVar25 + 0x4c) + -3.0;
        fVar35 = *(float *)(lVar25 + 0x50) + 3.0;
        do {
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          fVar27 = (float)iVar19 / 40.0;
          fVar28 = 1.0;
          if (fVar27 <= 1.0) {
            fVar28 = fVar27;
          }
          fVar31 = 0.0;
          if (0.0 <= fVar27) {
            fVar31 = fVar28;
          }
          fVar28 = fVar37 + (fVar35 - fVar37) * fVar31;
          System_ValueTuple_Vector3__float__float____ctor_3110ad4
                    (fVar28,0,*(undefined4 *)(lVar25 + 0xc4),0,
                     (fVar28 - *(float *)(lVar25 + 0xd4)) / (*(float *)(lVar25 + 0x60) * fVar32),
                     &uStack_e8,*(undefined8 *)puVar7);
          if (lVar20 == 0) goto LAB_0250499c;
          lVar23 = *(long *)(lVar20 + 0x10);
          lVar24 = *(long *)puVar11;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_0250499c;
          uVar3 = *(uint *)(lVar20 + 0x18);
          if (uVar3 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + (long)(int)uVar3 * 0x14;
            *(uint *)(lVar20 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar23 + 0x30) = uStack_d8;
            *(undefined8 *)(lVar23 + 0x28) = uStack_e0;
            *(undefined8 *)(lVar23 + 0x20) = uStack_e8;
          }
          else {
                    /* try { // try from 02504290 to 02604297 has its CatchHandler @ 025042ec */
            uStack_b8 = uStack_e0;
            uStack_c0 = uStack_e8;
            uStack_b0 = uStack_d8;
            System_Collections_Generic_List_ValueTuple_Vector3__float__float____AddWithResize_39d98d0
                      (lVar20,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
          puVar9 = PTR_DAT_04cbc2b8;
          iVar19 = iVar19 + 1;
                    /* try { // try from 025042a8 to 026042b3 has its CatchHandler @ 025042e8 */
        } while (iVar19 != 0x29);
                    /* try { // try from 025042b4 to 026042db has its CatchHandler @ 025041c4 */
        if (*(int *)(*(long *)PTR_DAT_04cbc2b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = Dino_BusSand_View_WorldView__Ribbon_2407640(fVar41,lVar20);
                    /* try { // try from 025042dc to 026042df has its CatchHandler @ 025042e4 */
                    /* try { // try from 025042e0 to 02604307 has its CatchHandler @ 025041c4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025042dc with catch @ 025042e4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025042a8 with catch @ 025042e8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02504290 with catch @ 025042ec
                        */
        lVar15 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                           (param_1,*(undefined8 *)PTR_DAT_04cbe1a0,uVar17,lVar15,0,1);
        puVar8 = PTR_DAT_04cb3c10;
        puVar7 = PTR_DAT_04caa1d0;
                    /* try { // try from 02504308 to 0260430b has its CatchHandler @ 0250432c */
                    /* try { // try from 0250430c to 0260432f has its CatchHandler @ 025041c4 */
        if ((lVar15 != 0) &&
           (lVar15 = UnityEngine_Component__get_transform_43bcd18(lVar15,0), lVar15 != 0)) {
                    /* catch() { ... } // from try @ 02504308 with catch @ 0250432c */
                    /* try { // try from 02504330 to 02604337 has its CatchHandler @ 02504340 */
          UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20a5c,0,lVar15,0);
          fVar32 = _UNK_00e2065c;
                    /* try { // try from 02504338 to 02604343 has its CatchHandler @ 025041c4 */
          fVar28 = *(float *)(lVar25 + 0x60);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02504330 with catch @ 02504340
                        */
          lVar15 = *(long *)(*(long *)puVar9 + 0xb8);
          fVar27 = fVar28 * _UNK_00e206e4;
          uVar30 = *(undefined4 *)(lVar15 + 0x44);
          uVar39 = *(undefined4 *)(lVar15 + 0x48);
          uVar42 = *(undefined4 *)(lVar15 + 0x4c);
          uVar36 = *(undefined4 *)(lVar15 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar28 = fVar28 * fVar32;
          uVar17 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                             (uVar30,uVar39,uVar42,uVar36,uVar34,0,*(undefined8 *)PTR_DAT_04cbe198,0
                             );
          lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
          System_Collections_Generic_List_Vector3____ctor_3af944c(lVar15,*(undefined8 *)puVar8);
          fVar32 = _UNK_00e20a74;
          iVar19 = 0;
          fVar41 = fVar41 * 0.5;
          fVar40 = fVar27 * 0.5;
          fVar31 = fVar41 + fVar40;
          do {
            System_Collections_Generic_List_ValueTuple_Vector3__float__float____get_Item_39d9560
                      (&uStack_c0,lVar16,iVar19,*(undefined8 *)puVar12);
            fVar14 = (float)uStack_b8;
            fVar4 = (float)uStack_c0;
            fVar29 = uStack_c0._4_4_;
            sincosf(uStack_b8._4_4_ * fVar32,&fStack_ec,&fStack_f0);
            if (lVar15 == 0) goto LAB_0250499c;
            lVar20 = *(long *)(lVar15 + 0x10);
            lVar23 = *(long *)puVar6;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_0250499c;
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              *(float *)(lVar20 + 0x20) = fVar4 - fVar31 * fStack_ec;
              *(float *)(lVar20 + 0x24) = fVar31 * 0.0 + fVar29;
              *(float *)(lVar20 + 0x28) = fVar14 - fVar31 * fStack_f0;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
            puVar9 = PTR_DAT_04cbc2b8;
            iVar19 = iVar19 + 1;
          } while (iVar19 != 0xdd);
          if (*(int *)(*(long *)PTR_DAT_04cbc2b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar18 = Dino_BusSand_View_WorldView__Curb_2407d34(fVar27,fVar28,lVar15);
          Dino_BusSand_View_WorldView__MeshObject_2405c94
                    (param_1,*(undefined8 *)PTR_DAT_04cbe190,uVar18,uVar17,0,1);
          fVar32 = *(float *)(lVar25 + 0xc4);
          fVar31 = *(float *)(lVar25 + 200);
          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar10 = PTR_DAT_04cbe1b0;
          fVar29 = _UNK_00e20994;
          fVar4 = _UNK_00e207cc;
          lVar15 = Dino_BusSand_View_MaterialLibrary__Ground_23ba8c8
                             (_UNK_00e203f4,_UNK_00e20994,_UNK_00e207cc,0x3f800000,
                              *(undefined8 *)PTR_DAT_04cbe1b0,0,0);
          if (lVar15 != 0) {
            fVar32 = fVar32 - fVar41;
            fVar31 = fVar41 + fVar31;
            UnityEngine_Material__SetColor_43830b0
                      (0x3f000000,_UNK_00e1fe68,_UNK_00e200b4,0x3f800000,lVar15,
                       *(undefined8 *)PTR_DAT_04cbcf60,0);
            UnityEngine_Material__SetVector_4383100
                      (fVar31,fVar32,0,0,lVar15,*(undefined8 *)PTR_DAT_04cbe0c8,0);
            UnityEngine_Material__SetFloat_4383048
                      (_UNK_00e201f4,lVar15,*(undefined8 *)PTR_DAT_04cb76e0,0);
            UnityEngine_Material__SetColor_43830b0
                      (_UNK_00e208e8,_UNK_00e20440,_UNK_00e20094,0x3f800000,lVar15,
                       *(undefined8 *)PTR_DAT_04caa108,0);
            UnityEngine_Material__SetFloat_4383048
                      (_UNK_00e200f8,lVar15,*(undefined8 *)PTR_DAT_04cbd1a0,0);
            fVar29 = *(float *)(lVar25 + 0xd0) * fVar29;
            uVar18 = Dino_BusSand_View_WorldView__RoundedRect_240889c
                               (*(float *)(lVar25 + 0xd4) - fVar29,fVar31,
                                *(float *)(lVar25 + 0xd8) + fVar29,fVar32,(fVar32 - fVar31) * 0.5,10
                               );
            lVar15 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                               (param_1,*(undefined8 *)puVar10,uVar18,lVar15,0,1);
            if ((lVar15 != 0) &&
               (lVar15 = UnityEngine_Component__get_transform_43bcd18(lVar15,0), lVar15 != 0)) {
              UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20294,0,lVar15,0);
              lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
              System_Collections_Generic_List_Vector3____ctor_3af944c(lVar15,*(undefined8 *)puVar8);
              if (lVar15 != 0) {
                lVar16 = *(long *)(lVar15 + 0x10);
                fVar32 = *(float *)(lVar25 + 0xc4);
                lVar20 = *(long *)puVar6;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 != 0) {
                  uVar3 = *(uint *)(lVar15 + 0x18);
                  if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
                    *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                    *(float *)(lVar16 + 0x20) = fVar37;
                    *(undefined4 *)(lVar16 + 0x24) = 0;
                    *(float *)(lVar16 + 0x28) = fVar40 + fVar41 + fVar32;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                              (fVar37,0,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar16 = *(long *)(lVar15 + 0x10);
                  fVar32 = *(float *)(lVar25 + 0xc4);
                  lVar20 = *(long *)puVar6;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar16 != 0) {
                    uVar3 = *(uint *)(lVar15 + 0x18);
                    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
                      *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                      *(float *)(lVar16 + 0x20) = fVar35;
                      *(undefined4 *)(lVar16 + 0x24) = 0;
                      *(float *)(lVar16 + 0x28) = fVar40 + fVar41 + fVar32;
                    }
                    else {
                      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                                (fVar35,0,lVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    uVar18 = Dino_BusSand_View_WorldView__Curb_2407d34(fVar27,fVar28,lVar15);
                    Dino_BusSand_View_WorldView__MeshObject_2405c94
                              (param_1,*(undefined8 *)PTR_DAT_04cbe1b8,uVar18,uVar17,0,1);
                    lVar15 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,2);
                    if (lVar15 != 0) {
                      iVar19 = (int)*(ulong *)(lVar15 + 0x18);
                      if ((iVar19 != 0) &&
                         (*(undefined4 *)(lVar15 + 0x20) = 0xbf800000, iVar19 != 1)) {
                        *(undefined4 *)(lVar15 + 0x24) = 0x3f800000;
                        puVar7 = PTR_DAT_04cab4b0;
                        puVar6 = PTR_DAT_04caa208;
                        fVar32 = _UNK_00e2094c;
                        if (0 < iVar19) {
                          NEON_fmov(0x3fa00000,4);
                          uVar26 = 0;
                          uVar21 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                          do {
                            if (uVar21 <= uVar26) goto LAB_025049a0;
                            lVar16 = *(long *)puVar9;
                            fVar35 = *(float *)(lVar15 + 0x20 + uVar26 * 4);
                            if (*(int *)(lVar16 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar16 = *(long *)puVar9;
                            }
                            if (*(char *)(*(long *)(lVar16 + 0xb8) + 1) != '\0') {
                              fVar37 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34
                                                        (*(undefined4 *)(lVar25 + 0xc4),lVar25,0);
                              fVar31 = *(float *)(lVar25 + 0x60);
                              fVar28 = *(float *)(lVar25 + 0xc4);
                              if (cRam0000000004f9b88b == '\0') {
                                FUN_02132f7c(puVar7);
                                cRam0000000004f9b88b = '\x01';
                              }
                              puVar22 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                              uVar30 = *puVar22;
                              uVar34 = puVar22[1];
                              uVar36 = puVar22[2];
                              uVar39 = puVar22[3];
                              if (cRam0000000004f9b65e == '\0') {
                                FUN_02132f7c(puVar6);
                                cRam0000000004f9b65e = '\x01';
                              }
                              Dino_BusSand_View_WorldView__Model_24054f0
                                        (fVar35 * (fVar37 + fVar31 * fVar4),0,
                                         fVar31 * fVar32 + fVar27 + fVar41 + fVar28,uVar30,uVar34,
                                         uVar36,uVar39,param_1,*(undefined8 *)PTR_DAT_04cbe1a8,0);
                            }
                            uVar21 = (ulong)*(uint *)(lVar15 + 0x18);
                            uVar26 = uVar26 + 1;
                          } while ((long)uVar26 < (long)(int)*(uint *)(lVar15 + 0x18));
                        }
                        return;
                      }
LAB_025049a0:
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
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
LAB_0250499c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

