/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c$$<.ctor>b__27_0
int32_t Dino_BusSand_App_Meta_PassportFeature___c____ctor_b__27_0 (Dino_BusSand_App_Meta_PassportFeature___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c$$<.ctor>b__27_0
   int32_t Dino_BusSand_App_Meta_PassportFeature___c____ctor_b__27_0
   (Dino_BusSand_App_Meta_PassportFeature___c_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_PassportFeature___c____ctor_b__27_0_224adb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
                    /* try { // try from 0234adb8 to 0244adcf has its CatchHandler @ 0234ae30 */
  puVar1 = PTR_DAT_04caef48;
                    /* try { // try from 0234add0 to 0244ae1f has its CatchHandler @ 0234a9e4 */
  if ((bRam0000000004f9bf98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf98 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc();
  puVar1 = PTR_DAT_04cb01b0;
  if (lVar10 != 0) {
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
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (lVar10,*(undefined8 *)puVar1);
    puVar5 = PTR_DAT_04cb39f8;
    puVar4 = PTR_DAT_04cb39f0;
    puVar3 = PTR_DAT_04cad8c8;
    puVar2 = PTR_DAT_04cad890;
    puVar1 = PTR_DAT_04cac018;
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x80) == 0) {
        iVar11 = 0;
      }
      else {
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_58,*(long *)(lVar10 + 0x80),*(undefined8 *)PTR_DAT_04cad8a0);
        iVar11 = 0;
        while (uVar8 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                 (&uStack_58,*(undefined8 *)puVar2), uVar6 = uStack_48,
              (uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar6 & 0xffffffff,0);
          uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar5,0);
          iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
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
  return 0;
}

