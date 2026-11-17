/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Layout
void Dino_BusSand_App_UI_HomePanel__Layout (Dino_BusSand_App_UI_HomePanel_o* __this, bool entrance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Layout
   void Dino_BusSand_App_UI_HomePanel__Layout (Dino_BusSand_App_UI_HomePanel_o* __this, bool
   entrance, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__Layout_22ece0c(long param_1,ulong param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c44a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7650);
    FUN_02132f7c(PTR_DAT_04cb7658);
    FUN_02132f7c(PTR_DAT_04cb7660);
    FUN_02132f7c(PTR_DAT_04cb7668);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c44a = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar11 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
       lVar12 == 0)) goto LAB_023ed17c;
    uVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar12,0);
    uVar8 = uVar8 & 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x88);
                    /* try { // try from 023ecf0c to 024ecf13 has its CatchHandler @ 023ecfa0 */
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023ecf20 to 024ecf37 has its CatchHandler @ 023ecfa4 */
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar11 & 1) == 0) {
LAB_023ecf54:
    uVar17 = 0;
  }
  else {
                    /* try { // try from 023ecf38 to 024ecf8f has its CatchHandler @ 023ecc08 */
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
       lVar12 == 0)) goto LAB_023ed17c;
    uVar11 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar12,0);
    if ((uVar11 & 1) == 0) goto LAB_023ecf54;
    uVar17 = 1;
  }
  puVar7 = PTR_DAT_04cb7658;
  puVar6 = PTR_DAT_04cb7650;
  if (*(long *)(param_1 + 0xc0) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c8,*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_04cb7668);
    uStack_b0 = uStack_c8;
    fVar5 = _UNK_00e208cc;
    fVar4 = _UNK_00e204f4;
    uVar3 = _UNK_00e203f4;
    fVar2 = _UNK_00e20174;
                    /* try { // try from 023ecf90 to 024ecf93 has its CatchHandler @ 023ecf9c */
                    /* try { // try from 023ecf94 to 024ecf97 has its CatchHandler @ 023ecf98 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ecf94 with catch @ 023ecf98
                       try { // try from 023ecf98 to 024ecfbf has its CatchHandler @ 023ecc08 */
    uStack_c8 = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ecf90 with catch @ 023ecf9c
                        */
    lStack_a0 = lStack_b8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ecf0c with catch @ 023ecfa0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ecf20 with catch @ 023ecfa4
                        */
    iVar18 = 0;
    uStack_a8 = puStack_c0;
                    /* try { // try from 023ecfc0 to 024ecfc3 has its CatchHandler @ 023ed000 */
    puStack_c0 = &uStack_b0;
    while( true ) {
                    /* try { // try from 023ecfc4 to 024ed003 has its CatchHandler @ 023ecc08 */
      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_b0,*(undefined8 *)puVar7);
      lVar12 = lStack_a0;
      if ((uVar11 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_b0,*(undefined8 *)puVar6);
        return;
      }
      if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_a0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *(long *)(*(long *)(lStack_a0 + 0x20) + 0x28);
      if (lVar15 == 0) {
                    /* try { // try from 023ed004 to 024ed00b has its CatchHandler @ 023ed014 */
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)(lVar15 + 0x18))
                          (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
                    /* catch() { ... } // from try @ 023ecfc0 with catch @ 023ed000 */
      }
                    /* try { // try from 023ed00c to 024ed017 has its CatchHandler @ 023ecc08 */
      lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023ed004 with catch @ 023ed014
                        */
      if (lVar15 == 0) break;
      uVar10 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
      if (((uVar9 ^ uVar10) & 1) != 0) {
        lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_GameObject__SetActive_43c1408(lVar15,uVar9 & 1,0);
      }
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar1 = *(byte *)(*(long *)(lVar12 + 0x20) + 0x18);
        uVar9 = uVar17;
        if (bVar1 != 0) {
          uVar9 = uVar8;
        }
        plVar13 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar12,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*plVar13 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar13);
        }
        uVar16 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar13,0);
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (uVar16,(float)(int)uVar9 * fVar4 + -564.0,plVar13,0);
        uVar8 = uVar8 + bVar1;
        uVar17 = uVar17 + (bVar1 ^ 1);
        if ((param_2 & 1) != 0) {
          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = 0xc3a00000;
          if (*(char *)(*(long *)(lVar12 + 0x20) + 0x18) != '\0') {
            uVar14 = 0x43a00000;
          }
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar19 = (float)iVar18;
          iVar18 = iVar18 + 1;
          Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc
                    (uVar14,0,fVar19 * fVar2 + fVar5,uVar3,plVar13,1,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023ed17c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

