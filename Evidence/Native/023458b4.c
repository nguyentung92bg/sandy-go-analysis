/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$PowerLimitAdd
int32_t Dino_BusSand_App_Meta_PassportFeature__PowerLimitAdd (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$PowerLimitAdd
   int32_t Dino_BusSand_App_Meta_PassportFeature__PowerLimitAdd
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_PassportFeature__PowerLimitAdd_22458b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb39f0);
    FUN_02132f7c(PTR_DAT_04cb39f8);
    bRam0000000004f9bf4d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar5 = PTR_DAT_04cb39f8;
  puVar4 = PTR_DAT_04cb39f0;
  puVar3 = PTR_DAT_04cad8c8;
  puVar2 = PTR_DAT_04cad890;
  puVar1 = PTR_DAT_04cac018;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x80) == 0) {
      iVar11 = 0;
    }
    else {
      System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                (&uStack_58,*(long *)(lVar8 + 0x80),*(undefined8 *)PTR_DAT_04cad8a0);
      iVar11 = 0;
      while (uVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                               (&uStack_58,*(undefined8 *)puVar2), uVar6 = uStack_48,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar6 & 0xffffffff,0);
        uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)puVar5,0);
        iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
        iVar11 = iVar7 + iVar11;
      }
      System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                (&uStack_58,*(undefined8 *)puVar3);
    }
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

