/* IL2CPP: Dino.BusSand.App.UI.UIManager$$SubstituteSoftMasks
void Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks (UnityEngine_GameObject_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$SubstituteSoftMasks
   void Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks (UnityEngine_GameObject_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  
                    /* try { // try from 022fe794 to 023fe79b has its CatchHandler @ 022fe86c */
  if ((bRam0000000004f9bc79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
                    /* try { // try from 022fe7a8 to 023fe7d3 has its CatchHandler @ 022fe8b8 */
    FUN_02132f7c(PTR_DAT_04cb1b10);
    FUN_02132f7c(PTR_DAT_04cb0700);
    FUN_02132f7c(PTR_DAT_04cb1b18);
    FUN_02132f7c(PTR_DAT_04cb1b20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022fe7e4 to 023fe7eb has its CatchHandler @ 022fe898 */
    FUN_02132f7c(PTR_DAT_04cb1b28);
    bRam0000000004f9bc79 = 1;
  }
                    /* try { // try from 022fe804 to 023fe80f has its CatchHandler @ 022fe880 */
                    /* try { // try from 022fe810 to 023fe827 has its CatchHandler @ 022fe858 */
  if ((param_1 != 0) &&
     (lVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                        (param_1,1,*(undefined8 *)PTR_DAT_04cb1b20), puVar7 = PTR_DAT_04cb1b28,
     puVar6 = PTR_DAT_04cb1b18, puVar5 = PTR_DAT_04cb1b10, puVar4 = PTR_DAT_04cb0700,
     puVar3 = PTR_DAT_04cad788, puVar2 = PTR_DAT_04ca9ae8, lVar9 != 0)) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
                    /* try { // try from 022fe83c to 023fe83f has its CatchHandler @ 022fe840 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe83c with catch @ 022fe840
                       try { // try from 022fe840 to 023fe8ef has its CatchHandler @ 022fe5fc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe810 with catch @ 022fe858
                        */
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar12 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe794 with catch @ 022fe86c
                        */
        if (lVar12 == 0) goto LAB_022fe998;
        uVar10 = UnityEngine_Object__get_name_43c71a4(lVar12,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe804 with catch @ 022fe880
                        */
        uVar11 = System_String__op_Inequality_46d110c(uVar10,*(undefined8 *)puVar7,0);
        if ((uVar11 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe64c with catch @ 022fe894
                        */
          uVar10 = UnityEngine_Component__GetComponent_object__26f97e8(lVar12,*(undefined8 *)puVar5)
          ;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe7e4 with catch @ 022fe898
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe640 with catch @ 022fe89c
                        */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe7a8 with catch @ 022fe8b8
                        */
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          if ((uVar11 & 1) == 0) {
            uVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar12,*(undefined8 *)puVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe630 with catch @ 022fe8dc
                       catch(type#1 @ 00000000) { ... } // from try @ 022fe658 with catch @ 022fe8dc
                        */
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
            if ((uVar11 & 1) == 0) {
              uVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar12,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
              if (((uVar11 & 1) == 0) &&
                 (iVar8 = UnityEngine_Transform__get_childCount_43d4480(lVar12,0), iVar8 != 0)) {
                lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
                if ((lVar12 == 0) ||
                   (lVar12 = UnityEngine_GameObject__AddComponent_object__275a54c
                                       (lVar12,*(undefined8 *)puVar6), lVar12 == 0))
                goto LAB_022fe998;
                UnityEngine_UI_Mask__set_showMaskGraphic_4689750(lVar12,0,0);
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return;
  }
LAB_022fe998:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

