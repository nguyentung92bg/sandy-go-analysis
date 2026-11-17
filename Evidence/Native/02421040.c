/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$Steps
System_Collections_Generic_IEnumerable_IEnumerator__o* Dino_BusSand_App_UI_LiveOpsHome__Steps (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$Steps
   System_Collections_Generic_IEnumerable_IEnumerator__o* Dino_BusSand_App_UI_LiveOpsHome__Steps
   (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LiveOpsHome__Steps_2321040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04cb8a10;
  puVar1 = PTR_DAT_04cb8a08;
  if ((bRam0000000004f9c5b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8a10);
    FUN_02132f7c(PTR_DAT_04cb8a08);
    bRam0000000004f9c5b0 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  Dino_BusSand_App_UI_LiveOpsHome__CollectSteps_23212c0(uVar3);
  return uVar3;
}

