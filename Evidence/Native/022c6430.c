/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$Move
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_TowerEventPanel__Move (Dino_BusSand_App_UI_TowerEventPanel_o* __this, int32_t from, int32_t to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$Move
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_TowerEventPanel__Move
   (Dino_BusSand_App_UI_TowerEventPanel_o* __this, int32_t from, int32_t to, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_TowerEventPanel__Move_21c6430
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cafee8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6424 with catch @ 022c6434
                        */
                    /* try { // try from 022c6438 to 023c643b has its CatchHandler @ 022c6444 */
                    /* try { // try from 022c643c to 023c6447 has its CatchHandler @ 022c62b8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6438 with catch @ 022c6444
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c654c with catch @ 022c6448
                       catch(type#1 @ 00000000) { ... } // from try @ 022c65bc with catch @ 022c6448
                       catch(type#1 @ 00000000) { ... } // from try @ 022c65cc with catch @ 022c6448
                        */
  if ((bRam0000000004f9bafa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafee8);
                    /* try { // try from 022c646c to 023c6477 has its CatchHandler @ 022c65a0 */
    bRam0000000004f9bafa = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022c6488 to 023c6493 has its CatchHandler @ 022c658c */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
                    /* try { // try from 022c6494 to 023c64a3 has its CatchHandler @ 022c657c */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  *(undefined4 *)(lVar2 + 0x2c) = param_3;
  return lVar2;
}

