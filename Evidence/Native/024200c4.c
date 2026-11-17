/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Run
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeQueue__Run (Dino_BusSand_App_GameApp_o* app, bool afterWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Run
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_HomeQueue__Run (Dino_BusSand_App_GameApp_o*
   app, bool afterWin, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeQueue__Run_23200c4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb8980;
  if ((bRam0000000004f9c5aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8980);
    bRam0000000004f9c5aa = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02420110 to 02520113 has its CatchHandler @ 0242028c */
                    /* try { // try from 02420114 to 02520247 has its CatchHandler @ 0241fd04 */
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(byte *)(lVar2 + 0x28) = param_2 & 1;
  return lVar2;
}

