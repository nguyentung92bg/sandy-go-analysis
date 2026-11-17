/* IL2CPP: Dino.BusSand.App.UI.HallScene$$MuteGameplayLights
void Dino_BusSand_App_UI_HallScene__MuteGameplayLights (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$MuteGameplayLights
   void Dino_BusSand_App_UI_HallScene__MuteGameplayLights (Dino_BusSand_App_UI_HallScene_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__MuteGameplayLights_22d1a28(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar3 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c3be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6cd8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb6ce0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3be = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
LAB_023d1c68:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if ((*(long *)(lVar5 + 0x20) == 0) ||
         (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (*(long *)(lVar5 + 0x20),0,*(undefined8 *)PTR_DAT_04cb6cd8),
         puVar3 = PTR_DAT_04cb6ce0, lVar5 == 0)) goto LAB_023d1c68;
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar6 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar13 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
          if ((uVar8 & 1) == 0) {
            if (lVar13 == 0) goto LAB_023d1c68;
            uVar8 = UnityEngine_Behaviour__get_enabled_43bc458(lVar13,0);
            if (((uVar8 & 1) != 0) &&
               (iVar4 = UnityEngine_Light__get_type_4384d98(lVar13,0), iVar4 == 1)) {
              UnityEngine_Behaviour__set_enabled_43bc50c(lVar13,0,0);
              lVar7 = *(long *)(param_1 + 0x68);
              if (lVar7 == 0) goto LAB_023d1c68;
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)puVar3;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_023d1c68;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar13;
                thunk_FUN_02134474(plVar10,lVar13);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar7,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
  }
  return;
}

