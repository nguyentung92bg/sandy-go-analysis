/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CfgList
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_PassportFeature__CfgList (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_String_o* k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CfgList
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_PassportFeature__CfgList
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_String_o* k, const MethodInfo* method);
    */

long * Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c();
  plVar3 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar2,param_2,0);
  if ((bRam0000000004f9b7e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b90,0);
    bRam0000000004f9b7e0 = 1;
  }
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b90 + 0x130);
    if (bVar1 <= *(byte *)(*plVar3 + 0x130)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04ca9b90)
      {
        return plVar3;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

