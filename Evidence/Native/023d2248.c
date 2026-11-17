/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SetLabel
void Dino_BusSand_App_UI_HallScene__SetLabel (Dino_BusSand_App_UI_HallScene_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SetLabel
   void Dino_BusSand_App_UI_HallScene__SetLabel (Dino_BusSand_App_UI_HallScene_o* __this, int32_t
   level, const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__SetLabel_22d2248(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04caa398;
  puVar1 = PTR_DAT_04ca9c20;
  uStack_44 = param_2;
  if ((bRam0000000004f9c3c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6d30);
    FUN_02132f7c(PTR_DAT_04cb6d38);
    FUN_02132f7c(PTR_DAT_04cb6d40);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6d48);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04cb6d50);
    bRam0000000004f9c3c0 = 1;
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  plStack_60 = (long *)0x0;
  plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  uVar7 = System_Int32__ToString_482d750(&uStack_44,0);
  lVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar7,0);
  if (plVar6 != (long *)0x0) {
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
      uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar7,0);
    }
    puVar2 = PTR_DAT_04cb6d50;
    puVar1 = PTR_DAT_04cab550;
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar6[4] = lVar8;
    thunk_FUN_02134474(plVar6 + 4,lVar8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar2,plVar6,0);
    if (lVar8 != 0) {
      uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      iVar5 = System_String__IndexOf_46d72c4(lVar8,10,0);
      if (iVar5 < 0) {
        uVar10 = System_String__Trim_46d6ee0(lVar8,0);
      }
      else {
        lVar9 = System_String__Substring_46d4848(lVar8,0,iVar5,0);
        if (lVar9 == 0) goto LAB_023d2584;
        uVar10 = System_String__Trim_46d6ee0(lVar9,0);
        lVar8 = System_String__Substring_46d6a94(lVar8,iVar5 + 1,0);
        if (lVar8 == 0) goto LAB_023d2584;
        uVar7 = System_String__Trim_46d6ee0(lVar8,0);
      }
      puVar4 = PTR_DAT_04cb6d48;
      puVar3 = PTR_DAT_04cb6d38;
      puVar2 = PTR_DAT_04cb6d30;
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_1 + 0x50) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_88,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb6d48);
        plStack_60 = plStack_78;
        puStack_68 = puStack_80;
        uStack_70 = uStack_88;
        uStack_88 = 0;
        puStack_80 = &uStack_70;
        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_70,*(undefined8 *)puVar3), plVar6 = plStack_60,
              (uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
          if ((uVar11 & 1) != 0) {
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            (**(code **)(*plVar6 + 0x518))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x520));
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x58) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_88,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
          plStack_60 = plStack_78;
          puStack_68 = puStack_80;
          uStack_70 = uStack_88;
          uStack_88 = 0;
          puStack_80 = &uStack_70;
          while( true ) {
            do {
              uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_70,*(undefined8 *)puVar3);
              plVar6 = plStack_60;
              if ((uVar11 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_70,*(undefined8 *)puVar2);
                return;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
            } while ((uVar11 & 1) == 0);
            if (plVar6 == (long *)0x0) break;
            (**(code **)(*plVar6 + 0x518))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x520));
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_023d2584:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

