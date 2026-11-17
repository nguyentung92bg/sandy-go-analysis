/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$OnGranted
void Dino_BusSand_App_UI_ChestPanel__OnGranted (Dino_BusSand_App_UI_ChestPanel_o* __this, System_Collections_Generic_List_KeyValuePair_int__long___o* got, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$OnGranted
   void Dino_BusSand_App_UI_ChestPanel__OnGranted (Dino_BusSand_App_UI_ChestPanel_o* __this,
   System_Collections_Generic_List_KeyValuePair_int__long___o* got, int32_t times, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_ChestPanel__OnGranted_232776c(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_68;
  
  if (param_3 < 2) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x68);
  if ((bRam0000000004f9c5dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cb8ca8);
    FUN_02132f7c(PTR_DAT_04cb8cb0);
    FUN_02132f7c(PTR_DAT_04cb8cb8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cb8cc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8cc8);
    FUN_02132f7c(PTR_DAT_04cb8cd0);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cabb10);
    bRam0000000004f9c5dd = 1;
  }
  puVar7 = PTR_DAT_04cb8cd0;
  puVar6 = PTR_DAT_04cb8cc8;
  puVar5 = PTR_DAT_04cb8cb0;
  puVar4 = PTR_DAT_04cad4c0;
  puVar3 = PTR_DAT_04cabb10;
  puVar2 = PTR_DAT_04ca9ae8;
  lStack_80 = 0;
  lStack_68 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  if (lVar13 != 0) {
    System_Collections_Generic_List_ValueTuple_object__KeyValuePair_int__long_____GetEnumerator_39b4ad4
              (&uStack_c8,lVar13,*(undefined8 *)PTR_DAT_04cb8cc0);
    uVar1 = _UNK_00e208e8;
    uStack_98 = puStack_c0;
    uStack_a0 = uStack_c8;
    uStack_88 = uStack_b0;
    plStack_90 = plStack_b8;
    lStack_80 = lStack_a8;
    uStack_c8 = 0;
    puStack_c0 = &uStack_a0;
    do {
      do {
        uVar10 = System_Collections_Generic_List_Enumerator_ValueTuple_object__KeyValuePair_int__long_____MoveNext_35bb9e0
                           (&uStack_a0,*(undefined8 *)puVar5);
        lVar13 = lStack_80;
        plVar8 = plStack_90;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_ValueTuple_object__KeyValuePair_int__long_____Dispose_35bb9dc
                    (&uStack_a0,*(undefined8 *)PTR_DAT_04cb8ca8);
          puVar2 = PTR_DAT_04cad568;
          if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
          lVar13 = *(long *)puVar2;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar2;
          }
          if (**(long **)(lVar13 + 0xb8) != 0) {
            Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar13 + 0xb8),0);
          }
          return;
        }
        iVar9 = (int)uStack_88;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
      } while ((uVar10 & 1) != 0);
      if (iVar9 == 0x3e9) {
        lVar11 = *(long *)puVar7;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar7;
        }
        puVar14 = *(undefined8 **)(lVar11 + 0xb8);
        lVar15 = puVar14[1];
        if (lVar15 == 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar16 = *puVar14;
          lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(lVar15,uVar16,*(undefined8 *)puVar6,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          *plVar12 = lVar15;
          thunk_FUN_02134474(plVar12,lVar15);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Count_2285af8
                  (uVar1,0,plVar8,lVar13,lVar13 * param_3,0,lVar15,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      else {
        lStack_68 = lVar13 * param_3;
        uVar16 = System_Int64__ToString_482e7e4(&lStack_68,0);
        uVar16 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar16,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(uVar16,uVar16);
        }
        (**(code **)(*plVar8 + 0x518))(plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x520));
      }
      uVar16 = TMPro_TMP_Text__get_transform_42cd604(plVar8,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Punch_2283d78(0x3e800000,0x3f000000,uVar16,0,0,0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

