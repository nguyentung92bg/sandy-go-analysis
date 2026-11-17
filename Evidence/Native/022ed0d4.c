/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnBotsUpdated
void Dino_BusSand_App_UI_YachtRacingPanel__OnBotsUpdated (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnBotsUpdated
   void Dino_BusSand_App_UI_YachtRacingPanel__OnBotsUpdated (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnBotsUpdated_21ed0d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined4 uVar12;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bbfe & 1) == 0) {
                    /* try { // try from 022ed104 to 023ed10b has its CatchHandler @ 022ed168 */
                    /* try { // try from 022ed10c to 023ed197 has its CatchHandler @ 022ed06c */
    FUN_02132f7c(PTR_DAT_04cb11d0);
    FUN_02132f7c(PTR_DAT_04cb11d8);
    FUN_02132f7c(PTR_DAT_04cb11e0);
    FUN_02132f7c(PTR_DAT_04cb11e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbfe = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
                    /* catch() { ... } // from try @ 022ed104 with catch @ 022ed168 */
                    /* try { // try from 022ed198 to 023ed22f has its CatchHandler @ 022ed198
                       catch() { ... } // from try @ 022ed198 with catch @ 022ed198
                       catch() { ... } // from try @ 022ed238 with catch @ 022ed198 */
  if (((((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x2c) == '\0')) &&
      (*(long *)(param_1 + 0x40) != 0)) &&
     (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0),
     puVar2 = PTR_DAT_04cb11e8, (uVar3 & 1) != 0)) {
    if (((*(long *)(param_1 + 0x40) == 0) ||
        (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) {
LAB_022ed2f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar8 = 0;
      bVar11 = 1;
      uVar10 = 1;
      do {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_022ed2f4;
        if (*(int *)(*(long *)(param_1 + 0x50) + 0x18) <= iVar8) {
          return;
        }
        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,iVar8,*(undefined8 *)PTR_DAT_04cb11e0);
        if (lVar4 == 0) goto LAB_022ed2f4;
        if (*(int *)(lVar4 + 0x14) == *(int *)(lVar4 + 0x18)) {
          bVar9 = 0;
          uVar12 = 0;
        }
        else {
                    /* try { // try from 022ed230 to 023ed237 has its CatchHandler @ 022ed294 */
                    /* try { // try from 022ed238 to 023ed2c3 has its CatchHandler @ 022ed198 */
          bVar9 = bVar11 & *(int *)(lVar4 + 0x14) == 0;
          bVar11 = bVar11 ^ bVar9;
          uVar12 = uVar10;
          uVar10 = 0;
        }
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_022ed2f4;
        uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_1 + 0x50),iVar8,*(undefined8 *)puVar2);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 022ed230 with catch @ 022ed294 */
          if (((*(long *)(param_1 + 0x50) == 0) ||
              (lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (*(long *)(param_1 + 0x50),iVar8,*(undefined8 *)puVar2), lVar7 == 0
              )) || (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 == 0))
          goto LAB_022ed2f4;
          uVar3 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar7,0);
          if ((uVar3 & 1) != 0) {
                    /* try { // try from 022ed2c4 to 023ed35b has its CatchHandler @ 022ed2c4
                       catch() { ... } // from try @ 022ed2c4 with catch @ 022ed2c4
                       catch() { ... } // from try @ 022ed364 with catch @ 022ed2c4 */
            if ((*(long *)(param_1 + 0x50) == 0) ||
               (lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0x50),iVar8,*(undefined8 *)puVar2),
               lVar7 == 0)) goto LAB_022ed2f4;
            Dino_BusSand_App_UI_YachtRacingTrackRow__PlayForward_21f6620(lVar7,lVar4,uVar12,bVar9,0)
            ;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar6 + 0x18));
    }
  }
  return;
}

