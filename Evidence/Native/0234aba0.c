/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RunKeysFly
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_PassportFeature__RunKeysFly (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RunKeysFly
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_PassportFeature__RunKeysFly
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_224aba0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb3a70;
  if ((bRam0000000004f9bf92 & 1) == 0) {
                    /* try { // try from 0234abc4 to 0244ac1f has its CatchHandler @ 0234ada0 */
    FUN_02132f7c(PTR_DAT_04cb3a70);
    bRam0000000004f9bf92 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

