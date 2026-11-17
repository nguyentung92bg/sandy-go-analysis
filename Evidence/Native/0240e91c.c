/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$Consume
void Dino_BusSand_App_UI_HudPanel__Consume (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$Consume
   void Dino_BusSand_App_UI_HudPanel__Consume (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__Consume_230e91c(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  lVar5 = param_1;
  if ((bRam0000000004f9c532 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cacbf0);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cacbf8);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cb81f8);
    FUN_02132f7c(PTR_DAT_04cace90);
    lVar5 = FUN_02132f7c(PTR_DAT_04cb27d0);
    bRam0000000004f9c532 = 1;
  }
  puVar2 = PTR_DAT_04ca9b98;
  puVar3 = PTR_DAT_04ca9b90;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (**(char **)(*(long *)PTR_DAT_04cab380 + 0xb8) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__TrySpend_2272968(param_2,1,*(undefined8 *)PTR_DAT_04cace90,0);
    }
  }
  else {
    Dino_BusSand_App_UI_HudPanel__MarkFreeUsed_230f0bc(lVar5,param_2);
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04ca9ba0;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    uVar7 = *(undefined8 *)PTR_DAT_04cac768;
    lVar9 = *(long *)PTR_DAT_04ca9ba0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = PTR_DAT_04ca9ac8;
      uStack_34 = param_2;
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      puVar4 = PTR_DAT_04cb27d0;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(lVar5 + 0x10);
        uVar7 = *(undefined8 *)puVar4;
        lVar9 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          }
          auStack_38[0] = *(undefined1 *)(param_1 + 0x4c);
          uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x28),auStack_38);
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          puVar3 = PTR_DAT_04ca9ae8;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = *(undefined8 *)(param_1 + 0x40);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240ecd0;
              System_Collections_Generic_List_object___AddRange_3a81e04
                        (lVar5,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x50),
                         *(undefined8 *)PTR_DAT_04cacbf0);
            }
            puVar2 = PTR_DAT_04cb81f8;
            puVar3 = PTR_DAT_04cac5c0;
            uVar7 = System_Collections_Generic_List_object___ToArray_3a83728
                              (lVar5,*(undefined8 *)PTR_DAT_04cacbf8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar7 = Dino_BusSand_App_Analytics__L_216fff0(uVar7,0);
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar2,uVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_0240ecd0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

