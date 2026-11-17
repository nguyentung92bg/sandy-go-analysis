/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$LockTipTexts
void Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts (UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$LockTipTexts
   void Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts (UnityEngine_Transform_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts_2304344(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  
  if ((bRam0000000004f9c4e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* try { // try from 02404380 to 02504387 has its CatchHandler @ 02404700 */
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04cab550);
                    /* try { // try from 02404390 to 025043b3 has its CatchHandler @ 024046fc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7e18);
    FUN_02132f7c(PTR_DAT_04cb7e20);
                    /* try { // try from 024043b4 to 02504423 has its CatchHandler @ 02403fd8 */
    FUN_02132f7c(PTR_DAT_04cb7e28);
    bRam0000000004f9c4e6 = 1;
  }
  if ((param_1 != 0) &&
     (lVar9 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                        (param_1,1,*(undefined8 *)PTR_DAT_04cada48), puVar8 = PTR_DAT_04cb7e28,
     puVar7 = PTR_DAT_04cb7e20, puVar6 = PTR_DAT_04cb7e18, puVar5 = PTR_DAT_04cab550,
     puVar4 = PTR_DAT_04ca9d18, puVar3 = PTR_DAT_04ca9ae8, lVar9 != 0)) {
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar2) {
                    /* try { // try from 02404424 to 0250442b has its CatchHandler @ 024047bc */
      uVar16 = 0;
      do {
        if (uVar2 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
                    /* try { // try from 02404434 to 0250443b has its CatchHandler @ 0240475c */
        plVar12 = *(long **)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
                    /* try { // try from 0240443c to 0250444f has its CatchHandler @ 02404764 */
        if ((plVar12 == (long *)0x0) ||
           (lVar10 = UnityEngine_Object__get_name_43c71a4(plVar12,0), lVar10 == 0))
        goto LAB_02404620;
        uVar11 = System_String__StartsWith_46d117c(lVar10,*(undefined8 *)puVar6,0);
        if ((uVar11 & 1) == 0) {
          lVar10 = TMPro_TMP_Text__get_transform_42cd604(plVar12,0);
          if (lVar10 == 0) goto LAB_02404620;
                    /* try { // try from 02404478 to 025044df has its CatchHandler @ 02403fd8 */
          uVar13 = UnityEngine_Transform__get_parent_43d0d70(lVar10,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
          if ((uVar11 & 1) == 0) {
                    /* try { // try from 024044f0 to 025044f7 has its CatchHandler @ 02404758 */
            uVar13 = *(undefined8 *)puVar7;
          }
          else {
            lVar10 = TMPro_TMP_Text__get_transform_42cd604(plVar12,0);
            if (((lVar10 == 0) ||
                (lVar10 = UnityEngine_Transform__get_parent_43d0d70(lVar10,0), lVar10 == 0)) ||
               (lVar10 = UnityEngine_Object__get_name_43c71a4(lVar10,0), lVar10 == 0))
            goto LAB_02404620;
            uVar11 = System_String__StartsWith_46d117c(lVar10,*(undefined8 *)puVar6,0);
                    /* try { // try from 024044e0 to 025044e7 has its CatchHandler @ 024047b8 */
            puVar1 = (undefined8 *)puVar8;
            if ((uVar11 & 1) == 0) {
              puVar1 = (undefined8 *)puVar7;
            }
            uVar13 = *puVar1;
          }
        }
        else {
                    /* try { // try from 02404460 to 02504477 has its CatchHandler @ 0240480c */
          uVar13 = *(undefined8 *)puVar8;
        }
        lVar14 = *(long *)puVar4;
                    /* try { // try from 024044f8 to 0250450b has its CatchHandler @ 02404760 */
        lVar10 = *(long *)(lVar14 + 0x38);
        if (lVar10 == 0) {
          FUN_0216b4cc(lVar14);
          lVar10 = *(long *)(lVar14 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 0240451c to 02504533 has its CatchHandler @ 024047c0 */
          lVar10 = FUN_0216b470();
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar10 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    /* try { // try from 02404534 to 0250471b has its CatchHandler @ 02403fd8 */
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0216b470();
        }
        uVar15 = **(undefined8 **)(lVar10 + 0xb8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        uVar13 = Dino_BusSand_App_Lang__Get_215f9c0(uVar13,uVar15,0);
        (**(code **)(*plVar12 + 0x518))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x520));
        (**(code **)(*plVar12 + 0x788))(plVar12,0,0,*(undefined8 *)(*plVar12 + 0x790));
        lVar10 = TMPro_TMP_Text__get_textInfo_42cd550(plVar12,0);
        if (lVar10 != 0) {
          lVar10 = TMPro_TMP_Text__get_textInfo_42cd550(plVar12,0);
          if (lVar10 == 0) goto LAB_02404620;
          if (1 < *(int *)(lVar10 + 0x2c)) {
            TMPro_TMP_Text__set_enableAutoSizing_42cc454(plVar12,1,0);
            TMPro_TMP_Text__set_fontSizeMax_42cc4f0(0x42280000,plVar12,0);
          }
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar2);
    }
    return;
  }
LAB_02404620:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

