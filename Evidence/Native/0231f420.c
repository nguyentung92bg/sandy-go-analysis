/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleData$$EnsureLists
void Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists (Dino_BusSand_App_Meta_BattleRoyaleData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleData$$EnsureLists
   void Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists
   (Dino_BusSand_App_Meta_BattleRoyaleData_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists_221f420(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000004f9bdd1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cae328);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cae320);
    bRam0000000004f9bdd1 = 1;
  }
  plVar2 = (long *)(param_1 + 0x68);
  if (*plVar2 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  plVar2 = (long *)(param_1 + 0x88);
  if (*plVar2 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae320);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar1,*(undefined8 *)PTR_DAT_04cae328);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  plVar2 = (long *)(param_1 + 0x90);
  if (*plVar2 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  plVar2 = (long *)(param_1 + 0xa0);
  if (*plVar2 != 0) {
    return;
  }
  lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
  *plVar2 = lVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar2 >> 0xc & 0x3f),
                 ((ulong)plVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

