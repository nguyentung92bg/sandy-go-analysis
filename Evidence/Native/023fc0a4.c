/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnHeartClick
void Dino_BusSand_App_UI_MainHudPanel__OnHeartClick (Dino_BusSand_App_UI_MainHudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02265e84) */
/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnHeartClick
   void Dino_BusSand_App_UI_MainHudPanel__OnHeartClick (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__OnHeartClick_22fc0a4(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c4a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c4a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
    iVar3 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    puVar1 = PTR_DAT_04caba50;
    if (iVar2 < iVar3) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((bRam0000000004f9b87b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0xffffffff,0,0);
          FUN_02132f7c(PTR_DAT_04cac5a8);
          FUN_02132f7c(PTR_DAT_04cac5b0);
          bRam0000000004f9b87b = 1;
        }
        lVar5 = *(long *)(lVar5 + 0x28);
        uStack_24 = 0xffffffff;
        uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
        puVar1 = PTR_DAT_04ca9ae8;
        if (lVar5 != 0) {
          lVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar5,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar6,
                             *(undefined8 *)PTR_DAT_04cac5a8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (lVar5 == 0) goto LAB_02265ea8;
            *(undefined8 *)(lVar5 + 0x38) = 0;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),0);
          }
          return;
        }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

