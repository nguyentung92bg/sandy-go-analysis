/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$Check
void Dino_BusSand_App_Gameplay_MechanicIntro__Check (Dino_BusSand_Core_LevelData_o* lv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$Check
   void Dino_BusSand_App_Gameplay_MechanicIntro__Check (Dino_BusSand_Core_LevelData_o* lv, const
   MethodInfo* method); */

void Dino_BusSand_App_Gameplay_MechanicIntro__Check_22a16a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f9c25c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1870);
    bRam0000000004f9c25c = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar5 = Dino_BusSand_App_Gameplay_MechanicIntro__Present_22a084c(param_1);
  puVar4 = PTR_DAT_04cb1870;
  puVar3 = PTR_DAT_04cabaf8;
  puVar2 = PTR_DAT_04cab6c8;
  puVar1 = PTR_DAT_04cab6a0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,lVar5,*(undefined8 *)PTR_DAT_04cab720);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar2);
    uVar8 = uStack_50;
    if ((uVar6 & 1) == 0) goto LAB_023a1874;
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uStack_50,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar7,0);
  } while ((uVar6 & 1) != 0);
  uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar8,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar7,1,0);
  puVar2 = PTR_DAT_04caba50;
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    uVar8 = Dino_BusSand_App_Gameplay_MechanicIntro__TextOf_22a0750(uVar8);
    Dino_BusSand_App_GameApp__Toast_2166a6c(lVar5,uVar8,0);
  }
LAB_023a1874:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar1);
  return;
}

