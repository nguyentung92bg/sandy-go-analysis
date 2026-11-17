/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$CountUp
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_WinPanel__CountUp (Dino_BusSand_App_UI_WinPanel_o* __this, int32_t from, int32_t to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$CountUp
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_WinPanel__CountUp
   (Dino_BusSand_App_UI_WinPanel_o* __this, int32_t from, int32_t to, const MethodInfo* method); */

long Dino_BusSand_App_UI_WinPanel__CountUp_2313f7c
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb8390;
                    /* catch() { ... } // from try @ 02413f5c with catch @ 02413f80 */
                    /* try { // try from 02413f84 to 02513f8b has its CatchHandler @ 02413f94 */
                    /* try { // try from 02413f8c to 02513f97 has its CatchHandler @ 02413dbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02413f84 with catch @ 02413f94
                        */
  if ((bRam0000000004f9c55b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8390);
    bRam0000000004f9c55b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  *(undefined4 *)(lVar2 + 0x2c) = param_3;
  return lVar2;
}

