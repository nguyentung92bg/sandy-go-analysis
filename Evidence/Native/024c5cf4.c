/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildPlatform
void Dino_BusSand_View_MechanicLayer__BuildPlatform (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildPlatform
   void Dino_BusSand_View_MechanicLayer__BuildPlatform (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__BuildPlatform_23c5cf4
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  
  if ((bRam0000000004f9c9d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbd100);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbd118);
    FUN_02132f7c(PTR_DAT_04cbd120);
    bRam0000000004f9c9d2 = 1;
  }
  dStack_b0 = 0.0;
  dStack_a8 = 0.0;
  uStack_b8 = 0;
  if ((param_5 != 0) && (lVar12 = *(long *)(param_5 + 0x28), lVar12 != 0)) {
    uVar17 = *(undefined4 *)(lVar12 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar17,&dStack_a8,&dStack_b0,0);
    puVar4 = PTR_DAT_04cbd120;
    puVar2 = PTR_DAT_04caa070;
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar18 = (float)*(undefined8 *)(lVar12 + 0x18);
      fVar14 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                                (*(undefined8 *)(lVar12 + 0x10),*(long *)(param_4 + 0x28),0);
      uVar21 = *(ulong *)(lVar12 + 0x18);
      dVar23 = dStack_a8;
      fVar15 = (float)Dino_BusSand_View_MechanicLayer__Dir_23c237c
                                (*(undefined8 *)(lVar12 + 0x10),uVar21,dStack_a8,dStack_b0,param_4);
      fVar1 = SUB84(dVar23,0);
      fVar19 = (float)uVar21;
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      puVar3 = PTR_DAT_04caa208;
      dVar29 = *(double *)(lVar12 + 0x20);
      dVar28 = *(double *)(lVar12 + 0x28);
      lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar30 = *(float *)(lVar9 + 0x18);
      fVar24 = *(float *)(lVar9 + 0x1c);
      fVar27 = *(float *)(lVar9 + 0x20);
      uVar5 = System_Int32__ToString_482d750(param_5 + 0x10,0);
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar5,0);
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      UnityEngine_GameObject___ctor_43c20cc(lVar9,uVar5,0);
      if (lVar9 != 0) {
        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
        uVar5 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
        if (lVar9 != 0) {
          fVar32 = (float)dVar29 + _UNK_00e207cc;
          fVar31 = (float)dVar28 + _UNK_00e207cc;
          UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar5,0,0);
          UnityEngine_Transform__set_position_43d0f1c(fVar14,fVar18,param_3,lVar9,0);
          uVar6 = Dino_BusSand_View_MechanicLayer__ArtBasement_23c62bc
                            (fVar14,fVar18,param_3,fVar15,uVar21 & 0xffffffff,
                             (ulong)dVar23 & 0xffffffff,fVar32,fVar31,param_4,
                             *(undefined4 *)(param_5 + 0x10),lVar9,&uStack_b8);
          puVar2 = PTR_DAT_04cbd088;
          uVar5 = uStack_b8;
          if ((uVar6 & 1) == 0) {
                    /* try { // try from 024c5f54 to 025c60f3 has its CatchHandler @ 024c5f54
                       catch() { ... } // from try @ 024c5f54 with catch @ 024c5f54
                       catch() { ... } // from try @ 024c6374 with catch @ 024c5f54
                       catch() { ... } // from try @ 024c63e0 with catch @ 024c5f54
                       catch() { ... } // from try @ 024c6484 with catch @ 024c5f54 */
            if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = Dino_BusSand_View_PropKit__get_LiftPlate_23ddb8c(0);
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9bcf8 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar20 = *(float *)(lVar10 + 0x18) * _UNK_00e20b14;
            fVar22 = *(float *)(lVar10 + 0x1c) * _UNK_00e20b14;
            fVar16 = *(float *)(lVar10 + 0x20) * _UNK_00e20b14;
            uVar6 = (ulong)(uint)fVar18;
            fVar26 = fVar19;
            fVar25 = fVar1;
            uVar17 = UnityEngine_Quaternion__LookRotation_43af354
                               (fVar15,uVar21 & 0xffffffff,(ulong)dVar23 & 0xffffffff,0);
            uVar5 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                              (fVar14 + fVar20,fVar18 + fVar22,param_3 + fVar16,uVar17,fVar26,fVar25
                               ,uVar6 & 0xffffffff,param_4,uVar5,lVar9,0);
            puVar4 = PTR_DAT_04cab4b0;
            uVar13 = 0;
            do {
              fVar26 = -1.0;
              if ((uVar13 & 1) != 0) {
                fVar26 = 1.0;
              }
              fVar25 = -1.0;
              if (1 < uVar13) {
                fVar25 = 1.0;
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = Dino_BusSand_View_PropKit__get_LiftPost_23ddca4(0);
              fVar16 = *(float *)(param_4 + 0x50);
              if (cRam0000000004f9b88b == '\0') {
                FUN_02132f7c(puVar4);
                cRam0000000004f9b88b = '\x01';
              }
                    /* try { // try from 024c60f4 to 025c611b has its CatchHandler @ 024c63c0 */
              puVar11 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 024c6158 to 025c617f has its CatchHandler @ 024c63bc */
                    /* try { // try from 024c6190 to 025c6193 has its CatchHandler @ 024c6398 */
              Dino_BusSand_View_MechanicLayer__Prop_23c2534
                        (fVar14 + (fVar31 * (fVar1 * fVar24 - fVar19 * fVar27) * fVar25 +
                                  fVar32 * fVar15 * fVar26) * 0.5 * fVar16,
                         fVar18 + (fVar31 * (fVar15 * fVar27 - fVar1 * fVar30) * fVar25 +
                                  fVar32 * fVar19 * fVar26) * 0.5 * fVar16,
                         param_3 + (fVar31 * (fVar19 * fVar30 - fVar15 * fVar24) * fVar25 +
                                   fVar32 * fVar1 * fVar26) * 0.5 * fVar16,*puVar11,puVar11[1],
                         puVar11[2],puVar11[3],param_4,uVar8,lVar9,0);
                    /* try { // try from 024c6194 to 025c61a3 has its CatchHandler @ 024c63b0 */
              uVar13 = uVar13 + 1;
            } while (uVar13 != 4);
          }
          uVar17 = *(undefined4 *)(param_5 + 0x10);
                    /* try { // try from 024c61b4 to 025c61bb has its CatchHandler @ 024c63a0 */
          Dino_BusSand_View_MechanicLayer__EdgePoint_23c6768
                    (*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),
                     dStack_a8 * (double)fVar32 * 0.5,dStack_b0 * (double)fVar32 * 0.5,
                     dStack_b0 * (double)fVar31 * 0.5,-(dStack_a8 * (double)fVar31) * 0.5,param_4,
                     uVar17);
          plVar7 = (long *)Dino_BusSand_View_MechanicLayer__EdgeCounter_23c6f04
                                     (param_4,uVar17,lVar9);
          uVar8 = Dino_BusSand_View_MechanicLayer__LiftText_23c5938(param_4,param_5);
          puVar2 = PTR_DAT_04cbd118;
                    /* try { // try from 024c6208 to 025c622b has its CatchHandler @ 024c6384 */
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x518))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x520));
            lVar12 = *(long *)(param_4 + 0x90);
                    /* try { // try from 024c6234 to 025c623b has its CatchHandler @ 024c6380 */
            uVar17 = *(undefined4 *)(param_5 + 0x10);
            uStack_c8 = 0;
            uStack_c0 = 0;
            System_ValueTuple_object__object____ctor_30ee190
                      (&uStack_c8,uVar5,plVar7,*(undefined8 *)puVar2);
            if (lVar12 != 0) {
              System_Collections_Generic_Dictionary_int__ValueTuple_object__object____set_Item_3406748
                        (lVar12,uVar17,uStack_c8,uStack_c0,*(undefined8 *)PTR_DAT_04cbd100);
                    /* try { // try from 024c6280 to 025c62a3 has its CatchHandler @ 024c6390 */
              Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                        (_UNK_00e201f4,_UNK_00e20104,param_4,lVar9);
                    /* try { // try from 024c62b4 to 025c62b7 has its CatchHandler @ 024c6378 */
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024c62b8 to 025c62c7 has its CatchHandler @ 024c638c */
  FUN_02133224();
}

