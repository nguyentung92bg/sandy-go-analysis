/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$EnterNewStage
void Dino_BusSand_App_Meta_YachtRacingData__EnterNewStage (Dino_BusSand_App_Meta_YachtRacingData_o* __this, System_Collections_Generic_List_YachtRacingBot__o* bots, int64_t now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$EnterNewStage
   void Dino_BusSand_App_Meta_YachtRacingData__EnterNewStage
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this,
   System_Collections_Generic_List_YachtRacingBot__o* bots, int64_t now, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_YachtRacingData__EnterNewStage_2257d04
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357ca8 with catch @ 02357d04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02357cc4 with catch @ 02357d08
                        */
  if ((bRam0000000004f9c000 & 1) == 0) {
                    /* try { // try from 02357d2c to 02457d2f has its CatchHandler @ 02357d78 */
                    /* try { // try from 02357d30 to 02457d67 has its CatchHandler @ 02357ac4 */
    FUN_02132f7c(PTR_DAT_04cb3f18);
    FUN_02132f7c(PTR_DAT_04cb3f20);
    bRam0000000004f9c000 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
                    /* try { // try from 02357d68 to 02457d77 has its CatchHandler @ 02357d78 */
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
                    /* catch() { ... } // from try @ 02357d2c with catch @ 02357d78
                       catch() { ... } // from try @ 02357d68 with catch @ 02357d78 */
                    /* try { // try from 02357d7c to 02457d7f has its CatchHandler @ 02357d88 */
                    /* try { // try from 02357d80 to 02457d8b has its CatchHandler @ 02357ac4 */
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      lVar2 = *(long *)(param_1 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02357d7c with catch @ 02357d88
                        */
      if (lVar2 == 0) goto LAB_02357df8;
    }
                    /* try { // try from 02357d8c to 02457da7 has its CatchHandler @ 02357d8c
                       catch() { ... } // from try @ 02357d8c with catch @ 02357d8c
                       catch() { ... } // from try @ 02357e00 with catch @ 02357d8c
                       catch() { ... } // from try @ 02357e4c with catch @ 02357d8c
                       catch() { ... } // from try @ 02357f0c with catch @ 02357d8c */
    System_Collections_Generic_List_object___AddRange_3a81e04
              (lVar2,param_2,*(undefined8 *)PTR_DAT_04cb3f18);
    iVar1 = *(int *)(param_1 + 0x78);
                    /* try { // try from 02357da8 to 02457daf has its CatchHandler @ 02357e1c */
    if (iVar1 == 3) {
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    }
    else if (iVar1 == 2) {
                    /* try { // try from 02357dcc to 02457dd3 has its CatchHandler @ 02357e14 */
                    /* try { // try from 02357dd4 to 02457ddf has its CatchHandler @ 02357e18 */
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    }
    else if (iVar1 == 1) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    return;
  }
LAB_02357df8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02357df8 to 02457dff has its CatchHandler @ 02357e10 */
  FUN_02133224();
}

