/* IL2CPP: Dino.BusSand.View.GameView$$LaunchShove
void Dino_BusSand_View_GameView__LaunchShove (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_View_VehicleView_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$LaunchShove
   void Dino_BusSand_View_GameView__LaunchShove (Dino_BusSand_View_GameView_o* __this,
   Dino_BusSand_View_VehicleView_o* a, const MethodInfo* method); */

void Dino_BusSand_View_GameView__LaunchShove_239fe64
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000004f9c913 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4c8);
    FUN_02132f7c(PTR_DAT_04cbc4d0);
    FUN_02132f7c(PTR_DAT_04cbc4d8);
    FUN_02132f7c(PTR_DAT_04cbc4f0);
                    /* try { // try from 0249fed0 to 025a0103 has its CatchHandler @ 0249fed0
                       catch() { ... } // from try @ 0249fed0 with catch @ 0249fed0
                       catch() { ... } // from try @ 024a010c with catch @ 0249fed0
                       catch() { ... } // from try @ 024a0208 with catch @ 0249fed0
                       catch() { ... } // from try @ 024a022c with catch @ 0249fed0 */
    FUN_02132f7c(PTR_DAT_04cbc4e0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c913 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  Dino_BusSand_View_GameView__CollectParked_239fb7c(param_4);
  if ((param_5 != 0) &&
     (lVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0), lVar6 != 0)) {
    fVar9 = (float)UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    fVar16 = param_2;
    fVar19 = param_3;
    lVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
    if (lVar6 != 0) {
      fVar10 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar6,0);
      fVar17 = fVar16;
      fVar20 = fVar19;
      lVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      if (lVar6 != 0) {
        fVar11 = (float)UnityEngine_Transform__get_right_43d15f4(lVar6,0);
        puVar5 = PTR_DAT_04cbc4f0;
        puVar4 = PTR_DAT_04cbc4d0;
        puVar3 = PTR_DAT_04cbc4c8;
        puVar2 = PTR_DAT_04ca9ae8;
        if (*(long *)(param_4 + 0x188) != 0) {
          fVar18 = fVar17;
          fVar12 = fVar20;
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_b8,*(long *)(param_4 + 0x188),*(undefined8 *)PTR_DAT_04cbc4e0);
          fVar1 = _UNK_00e208e8;
          uStack_98 = puStack_b0;
          uStack_a0 = uStack_b8;
          lStack_90 = lStack_a8;
          puStack_b0 = &uStack_a0;
          uStack_b8 = 0;
          while( true ) {
            do {
              uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_a0,*(undefined8 *)puVar4);
              lVar6 = lStack_90;
              if ((uVar7 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_a0,*(undefined8 *)puVar3);
                return;
              }
              fVar15 = fVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                fVar15 = fVar12;
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,param_5,0);
              fVar12 = fVar15;
            } while ((uVar7 & 1) != 0);
            if (lVar6 == 0) break;
            lVar8 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            fVar12 = (float)UnityEngine_Transform__get_position_43d0e48(lVar8,0);
            fVar13 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_5,0);
            fVar14 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar6,0);
            fVar12 = fVar12 - fVar9;
            fVar21 = fVar18 - param_2;
            fVar18 = fVar15 - param_3;
            if (ABS(fVar19 * fVar18 + fVar10 * fVar12 + fVar16 * fVar21) <= (fVar13 + fVar14) * 0.5)
            {
              fVar18 = fVar20 * fVar18;
              fVar13 = fVar18 + fVar11 * fVar12 + fVar17 * fVar21;
              fVar12 = fVar20;
              fVar15 = (float)Dino_BusSand_View_GameView__DraftProximity_239fdc8
                                        (fVar13,param_4,param_5,lVar6);
              if (0.0 < fVar15) {
                fVar14 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(lVar6,0);
                fVar12 = 0.25;
                fVar18 = ABS(fVar13);
                if (fVar14 * 0.25 <= fVar18) {
                  if (*(long *)(param_4 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar7 = System_Collections_Generic_HashSet_long___Add_37e2edc
                                    (*(long *)(param_4 + 0x180),
                                     CONCAT44(*(undefined4 *)(param_5 + 0x20),
                                              *(undefined4 *)(lVar6 + 0x20)),*(undefined8 *)puVar5);
                  if ((uVar7 & 1) != 0) {
                    /* try { // try from 024a0104 to 025a010b has its CatchHandler @ 024a01e8 */
                    /* try { // try from 024a010c to 025a0203 has its CatchHandler @ 0249fed0 */
                    fVar14 = -1.0;
                    if (0.0 <= fVar13) {
                      fVar14 = 1.0;
                    }
                    fVar18 = fVar17 * fVar14;
                    fVar12 = fVar20 * fVar14;
                    Dino_BusSand_View_VehicleView__Draft_23fdb94
                              (fVar11 * fVar14,fVar18,fVar12,fVar15 * fVar1,lVar6,0);
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

