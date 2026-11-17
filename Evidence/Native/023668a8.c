/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$On
bool Dino_BusSand_App_Meta_Monetization__On (System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$On
   bool Dino_BusSand_App_Meta_Monetization__On (System_String_o* id, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Monetization__On_22668a8(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c061 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1ed8);
    bRam0000000004f9c061 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(param_1,0);
  bVar2 = false;
  if (lVar4 != 0) {
    iVar3 = Dino_BusSand_App_Meta_Monetization__RowInt_2266340
                      (param_1,*(undefined8 *)PTR_DAT_04cb1ed8,1);
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}

