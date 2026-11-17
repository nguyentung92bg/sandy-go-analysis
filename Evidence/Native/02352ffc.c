/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$CollectHallCommands
void Dino_BusSand_App_Meta_SystemOpenFeature__CollectHallCommands (Dino_BusSand_App_Meta_SystemOpenFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$CollectHallCommands
   void Dino_BusSand_App_Meta_SystemOpenFeature__CollectHallCommands
   (Dino_BusSand_App_Meta_SystemOpenFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool
   fromGame, const MethodInfo* method); */

void Dino_BusSand_App_Meta_SystemOpenFeature__CollectHallCommands_2252ffc
               (undefined8 param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_04cb3d00;
  if ((bRam0000000004f9bfe0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cb2cb8);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cb3d18);
    FUN_02132f7c(PTR_DAT_04cb3d20);
    FUN_02132f7c(PTR_DAT_04cb3d28);
    bRam0000000004f9bfe0 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_SystemOpenFeature__PendingGuides_22528cc(param_3 & 1);
  puVar7 = PTR_DAT_04cb3d28;
  puVar6 = PTR_DAT_04cb3d20;
  puVar5 = PTR_DAT_04cb3d18;
  puVar3 = PTR_DAT_04cb2cb8;
  puVar2 = PTR_DAT_04cad890;
  if (lVar8 != 0) {
    System_Collections_Generic_List_int___GetEnumerator_3a2ca40
              (&uStack_98,lVar8,*(undefined8 *)PTR_DAT_04cad8a0);
    uStack_70 = uStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                        (&uStack_80,*(undefined8 *)puVar2);
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cad8c8);
        return;
      }
      uVar1 = (undefined4)uStack_70;
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Object___ctor_4870e5c(lVar8,0);
      if (lVar8 == 0) break;
      lVar10 = *(long *)puVar4;
      *(undefined4 *)(lVar8 + 0x10) = uVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar4;
      }
      uVar1 = **(undefined4 **)(lVar10 + 0xb8);
      uVar11 = System_Int32__ToString_482d750((undefined4 *)(lVar8 + 0x10),0);
      uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar11,0);
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Func_object____ctor_379de3c(uVar12,lVar8,*(undefined8 *)puVar5,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_HallQueue__Add_222ca74(param_2,uVar1,uVar11,uVar12,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

