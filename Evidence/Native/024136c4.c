/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$SpendButtons
void Dino_BusSand_App_UI_WinPanel__SpendButtons (Dino_BusSand_App_UI_WinPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$SpendButtons
   void Dino_BusSand_App_UI_WinPanel__SpendButtons (Dino_BusSand_App_UI_WinPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__SpendButtons_23136c4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar2 = PTR_DAT_04cafcb8;
  if ((bRam0000000004f9c557 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8368);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cafcb8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c557 = 1;
  }
  lVar6 = FUN_02133068(*(undefined8 *)puVar2,2);
  if (lVar6 == 0) {
LAB_02413904:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0xc0);
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28));
      puVar5 = PTR_DAT_04cb8368;
      puVar4 = PTR_DAT_04cad4c0;
      puVar3 = PTR_DAT_04caa208;
      puVar2 = PTR_DAT_04ca9ae8;
      uVar1 = _UNK_00e20aec;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar12 = 0;
        uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar12) goto LAB_02413908;
          lVar11 = *(long *)(lVar6 + 0x20 + uVar12 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
          if ((uVar9 & 1) == 0) {
            if (lVar11 == 0) goto LAB_02413904;
            lVar7 = UnityEngine_Component__GetComponentInChildren_object__26f99c4
                              (lVar11,*(undefined8 *)puVar5);
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar10);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
            if ((uVar9 & 1) != 0) {
              if (lVar7 == 0) goto LAB_02413904;
              UnityEngine_Behaviour__set_enabled_43bc50c(lVar7,0,0);
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_UiMotion__Stop_22913ec(lVar11,0);
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(puVar3);
              cRam0000000004f9b65e = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                       *(undefined4 *)(lVar7 + 0x14),lVar11,0);
            uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
            lVar11 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar8,0);
            if (lVar11 == 0) goto LAB_02413904;
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar11,0,0);
            Dino_BusSand_App_UI_UiMotion__Fade_2291234(0x3f000000,uVar1,0,lVar11,0);
          }
          uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      return;
    }
  }
LAB_02413908:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

