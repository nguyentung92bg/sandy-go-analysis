/* IL2CPP: Dino.BusSand.View.GameView.<>c__DisplayClass171_0$$<OnBlocked>b__0
void Dino_BusSand_View_GameView___c__DisplayClass171_0___OnBlocked_b__0 (Dino_BusSand_View_GameView___c__DisplayClass171_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<>c__DisplayClass171_0$$<OnBlocked>b__0
   void Dino_BusSand_View_GameView___c__DisplayClass171_0___OnBlocked_b__0
   (Dino_BusSand_View_GameView___c__DisplayClass171_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_GameView___c__DisplayClass171_0___OnBlocked_b__0_23abe20
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  long lStack_68;
  
                    /* try { // try from 024abe20 to 025abe27 has its CatchHandler @ 024abf34 */
                    /* try { // try from 024abe40 to 025abe4b has its CatchHandler @ 024abf24 */
  if ((bRam0000000004f9c95f & 1) == 0) {
                    /* try { // try from 024abe4c to 025abe57 has its CatchHandler @ 024abf28 */
    FUN_02132f7c(PTR_DAT_04cbc4b8);
                    /* try { // try from 024abe60 to 025abe6b has its CatchHandler @ 024abf1c */
    FUN_02132f7c(PTR_DAT_04cad568);
                    /* try { // try from 024abe6c to 025abe77 has its CatchHandler @ 024abf20 */
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cae228);
                    /* try { // try from 024abe84 to 025abee7 has its CatchHandler @ 024abf2c */
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9c95f = 1;
  }
  lStack_68 = 0;
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (lVar5 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_4 + 0x10),0), lVar5 != 0)
     ) {
    fVar9 = (float)UnityEngine_Transform__get_position_43d0e48(lVar5,0);
    if (*(long *)(param_4 + 0x10) != 0) {
      fVar13 = *(float *)(param_4 + 0x20);
      uVar14 = *(undefined8 *)(param_4 + 0x18);
      fVar10 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc
                                (*(long *)(param_4 + 0x10),0);
      if (cRam0000000004f9bcf8 == '\0') {
                    /* try { // try from 024abee8 to 025abf17 has its CatchHandler @ 024abc70 */
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      if (*(long *)(param_4 + 0x10) != 0) {
        fVar15 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
        uVar16 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
                    /* try { // try from 024abf18 to 025abf1b has its CatchHandler @ 024abf30 */
        fVar11 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0
                                  (*(long *)(param_4 + 0x10),0);
        puVar2 = PTR_DAT_04cad568;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe60 with catch @ 024abf1c
                       try { // try from 024abf1c to 025abf53 has its CatchHandler @ 024abc70 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe6c with catch @ 024abf20
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe40 with catch @ 024abf24
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe4c with catch @ 024abf28
                        */
        if ((*(long *)(param_4 + 0x28) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_4 + 0x28) + 0xb8), lVar5 != 0)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe84 with catch @ 024abf2c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abf18 with catch @ 024abf30
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe20 with catch @ 024abf34
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024abe10 with catch @ 024abf38
                        */
          fVar10 = fVar10 * 0.5;
                    /* try { // try from 024abf54 to 025abf57 has its CatchHandler @ 024abf70 */
                    /* try { // try from 024abf58 to 025abf73 has its CatchHandler @ 024abc70 */
                    /* catch() { ... } // from try @ 024abf54 with catch @ 024abf70 */
                    /* try { // try from 024abf74 to 025abf7b has its CatchHandler @ 024abf84 */
                    /* try { // try from 024abf7c to 025abf87 has its CatchHandler @ 024abc70 */
          fVar12 = param_2 + (float)((ulong)uVar14 >> 0x20) * fVar10 +
                   (float)((ulong)uVar16 >> 0x20) * fVar11 * 0.45;
          uVar14 = CONCAT44(fVar12,fVar9 + (float)uVar14 * fVar10 + (float)uVar16 * fVar11 * 0.45);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024abf74 with catch @ 024abf84
                        */
          fVar9 = param_3 + fVar13 * fVar10 + fVar15 * fVar11 * _UNK_00e2094c;
          Dino_BusSand_View_Fx__Sparks_2393138
                    (uVar14,fVar12,fVar9,-*(float *)(param_4 + 0x18),-*(float *)(param_4 + 0x1c),
                     -*(float *)(param_4 + 0x20),lVar5,0x1a,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 != 0) {
            if (*(long *)(param_4 + 0x28) == 0) goto LAB_024ac130;
            Dino_BusSand_View_GameView__PanOf_23a7184
                      (uVar14,fVar12,fVar9,*(long *)(param_4 + 0x28),0);
            Dino_BusSand_GameAudio__Blocked_2382ad0(lVar5,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Play_2388ed8(2,0);
          puVar3 = PTR_DAT_04cbc4b8;
          puVar2 = PTR_DAT_04cae230;
          fVar10 = _UNK_00e2065c;
          fVar9 = _UNK_00e205f8;
          uVar1 = _UNK_00e20094;
          lVar5 = *(long *)(param_4 + 0x30);
          if (lVar5 != 0) {
            uVar7 = 0;
            do {
              if ((1 < uVar7) || (*(int *)(lVar5 + 0x18) <= (int)uVar7)) {
                return;
              }
              if (*(long *)(param_4 + 0x28) == 0) break;
              lVar8 = *(long *)(*(long *)(param_4 + 0x28) + 0xe0);
              uVar4 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                (lVar5,uVar7,*(undefined8 *)puVar2);
              if (lVar8 == 0) break;
              uVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                (lVar8,uVar4,&lStack_68,*(undefined8 *)puVar3);
              if ((uVar6 & 1) != 0) {
                if ((*(long *)(param_4 + 0x28) == 0) ||
                   (lVar5 = *(long *)(*(long *)(param_4 + 0x28) + 0x30), lVar5 == 0)) break;
                fVar13 = *(float *)(lVar5 + 0xfc);
                if (uVar7 == 0) {
                  if (lStack_68 == 0) break;
                  Dino_BusSand_View_VehicleView__Wiggle_23fda78
                            (*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                             *(undefined4 *)(param_4 + 0x20),fVar13 * fVar10,lStack_68,0);
                  if (lStack_68 == 0) break;
                  Dino_BusSand_View_VehicleView__Flash_23fdd58(uVar1,lStack_68,0);
                }
                else {
                  if (lStack_68 == 0) break;
                  Dino_BusSand_View_VehicleView__Wiggle_23fda78
                            (*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                             *(undefined4 *)(param_4 + 0x20),fVar13 * fVar9,lStack_68,0);
                }
              }
              lVar5 = *(long *)(param_4 + 0x30);
              uVar7 = uVar7 + 1;
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
LAB_024ac130:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

