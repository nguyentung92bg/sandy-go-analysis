/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$FloorY
float Dino_BusSand_App_UI_TowerEventPanel__FloorY (Dino_BusSand_App_UI_TowerEventPanel_o* __this, float floor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$FloorY
   float Dino_BusSand_App_UI_TowerEventPanel__FloorY (Dino_BusSand_App_UI_TowerEventPanel_o* __this,
   float floor, const MethodInfo* method); */

float Dino_BusSand_App_UI_TowerEventPanel__FloorY_21c64b8(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(long *)(param_2 + 0x68);
  if (param_1 <= 0.0) {
    if (lVar3 == 0) goto LAB_022c6628;
                    /* try { // try from 022c6544 to 023c654b has its CatchHandler @ 022c6574 */
                    /* try { // try from 022c654c to 023c65b3 has its CatchHandler @ 022c6448 */
    fVar7 = (float)(*(int *)(lVar3 + 0x18) + -2) * 98.0 + 250.0 + _UNK_00e1ff6c;
  }
  else {
    if (lVar3 == 0) {
LAB_022c6628:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 022c64cc to 023c64db has its CatchHandler @ 022c6590 */
    uVar2 = *(uint *)(lVar3 + 0x18);
    uVar4 = uVar2;
    if ((int)uVar2 < 2) {
      uVar4 = 1;
    }
    uVar1 = uVar2;
    if (uVar2 < 2) {
      uVar1 = 1;
    }
                    /* try { // try from 022c64dc to 023c64fb has its CatchHandler @ 022c6578 */
    if (1 < (int)uVar2) {
      lVar5 = 0;
      do {
        if ((ulong)uVar1 - 1 == lVar5) {
LAB_022c6624:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022c6624 to 023c6633 has its CatchHandler @ 022c670c */
          FUN_0213322c();
        }
        fVar7 = (float)*(int *)(lVar3 + 0x24 + lVar5 * 4);
        if (param_1 <= fVar7) {
          uVar4 = (uint)lVar5;
          if (uVar4 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6488 with catch @ 022c658c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c64cc with catch @ 022c6590
                       catch(type#1 @ 00000000) { ... } // from try @ 022c651c with catch @ 022c6590
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c646c with catch @ 022c65a0
                        */
            fVar8 = (float)(int)(uVar2 - 2) * 98.0 + 250.0;
            fVar9 = _UNK_00e1ff6c;
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6544 with catch @ 022c6574
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c64dc with catch @ 022c6578
                        */
            fVar8 = (float)(int)(~uVar4 + uVar2) * 98.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6494 with catch @ 022c657c
                        */
            fVar9 = 250.0;
          }
          if (uVar4 < uVar2) {
                    /* try { // try from 022c65b4 to 023c65bb has its CatchHandler @ 022c65c4 */
                    /* try { // try from 022c65bc to 023c65c7 has its CatchHandler @ 022c6448 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c65b4 with catch @ 022c65c4
                        */
                    /* try { // try from 022c65c8 to 023c65cb has its CatchHandler @ 022c65d4 */
            fVar10 = (float)*(int *)(lVar3 + (long)(int)uVar4 * 4 + 0x20);
                    /* try { // try from 022c65cc to 023c65d7 has its CatchHandler @ 022c6448 */
            fVar7 = fVar7 - fVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c65c8 with catch @ 022c65d4
                        */
            fVar6 = 1.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c66dc with catch @ 022c65d8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c674c with catch @ 022c65d8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c675c with catch @ 022c65d8
                        */
            if (1.0 <= fVar7) {
              fVar6 = fVar7;
            }
            fVar6 = (param_1 - fVar10) / fVar6;
                    /* try { // try from 022c65fc to 023c6607 has its CatchHandler @ 022c6730 */
            fVar7 = 1.0;
            if (fVar6 <= 1.0) {
              fVar7 = fVar6;
            }
            fVar10 = 0.0;
            if (0.0 <= fVar6) {
              fVar10 = fVar7;
            }
                    /* try { // try from 022c6618 to 023c6623 has its CatchHandler @ 022c671c */
            return fVar8 + fVar9 +
                   (((float)(int)((uVar2 - uVar4) + -2) * 98.0 + 250.0) - (fVar8 + fVar9)) * fVar10;
          }
          goto LAB_022c6624;
        }
        lVar5 = lVar5 + 1;
      } while ((ulong)uVar4 - 1 != lVar5);
    }
                    /* try { // try from 022c651c to 023c652b has its CatchHandler @ 022c6590 */
    fVar7 = 250.0;
  }
  return fVar7;
}

