/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Owns
bool Dino_BusSand_App_Meta_PlayerIdentity__Owns (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Owns
   bool Dino_BusSand_App_Meta_PlayerIdentity__Owns (int32_t id, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PlayerIdentity__Owns_226cdcc(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  puVar1 = PTR_DAT_04caef48;
  if ((bRam0000000004f9c0c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4758);
    FUN_02132f7c(PTR_DAT_04cb39f0);
    FUN_02132f7c(PTR_DAT_04cb4760);
    bRam0000000004f9c0c4 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  if (lVar9 != 0) {
    lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (lVar9,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar9 + 0x80) != 0) {
      System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                (&uStack_68,*(long *)(lVar9 + 0x80),*(undefined8 *)PTR_DAT_04cad8a0);
      puVar5 = PTR_DAT_04cb4760;
      puVar4 = PTR_DAT_04cb4758;
      puVar3 = PTR_DAT_04cb39f0;
      puVar2 = PTR_DAT_04cad890;
      puVar1 = PTR_DAT_04cac018;
      do {
        do {
          uVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                            (&uStack_68,*(undefined8 *)puVar2);
          uVar6 = uStack_58;
          if ((uVar7 & 1) == 0) goto LAB_0236cf88;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,uVar6 & 0xffffffff,0);
        } while (lVar9 == 0);
        uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar9,*(undefined8 *)puVar5,0);
        iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
        if (iVar8 == param_1) break;
        uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar9,*(undefined8 *)puVar4,0);
        iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
      } while (iVar8 != param_1);
LAB_0236cf88:
      System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                (&uStack_68,*(undefined8 *)PTR_DAT_04cad8c8);
      goto LAB_0236cff8;
    }
  }
  uVar7 = 0;
LAB_0236cff8:
  return uVar7 & 1;
}

