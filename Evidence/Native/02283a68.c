/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Owners
void Dino_BusSand_App_UI_KitPrefabs__Owners (UnityEngine_Transform_o* of, int32_t ofIndex, System_Collections_Generic_Dictionary_string__int__o* index, System_Collections_Generic_List_Transform__o* list, System_Collections_Generic_List_int__o* parent, System_Collections_Generic_List_int__o* after, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02283f94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Owners
   void Dino_BusSand_App_UI_KitPrefabs__Owners (UnityEngine_Transform_o* of, int32_t ofIndex,
   System_Collections_Generic_Dictionary_string__int__o* index,
   System_Collections_Generic_List_Transform__o* list, System_Collections_Generic_List_int__o*
   parent, System_Collections_Generic_List_int__o* after, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs__Owners_2183a68
               (long param_1,undefined4 param_2,long param_3,long param_4,long param_5,long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uStack_6c;
  long *plStack_68;
  
                    /* try { // try from 02283a6c to 02383a83 has its CatchHandler @ 02283ab0 */
                    /* try { // try from 02283a84 to 02383a9f has its CatchHandler @ 02283a38 */
                    /* try { // try from 02283aa0 to 02383aaf has its CatchHandler @ 02283ab0 */
  if ((bRam0000000004f9b936 & 1) == 0) {
                    /* catch() { ... } // from try @ 02283a6c with catch @ 02283ab0
                       catch() { ... } // from try @ 02283aa0 with catch @ 02283ab0
                       try { // try from 02283ab0 to 02383ac3 has its CatchHandler @ 02283a38 */
    FUN_02132f7c(PTR_DAT_04cad7c0);
    FUN_02132f7c(PTR_DAT_04cad650);
                    /* try { // try from 02283ac4 to 02383adf has its CatchHandler @ 02283ac4
                       catch() { ... } // from try @ 02283ac4 with catch @ 02283ac4
                       catch() { ... } // from try @ 02283b58 with catch @ 02283ac4 */
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
                    /* try { // try from 02283ae0 to 02383aeb has its CatchHandler @ 02283b84 */
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad7c8);
                    /* try { // try from 02283b04 to 02383b23 has its CatchHandler @ 02283b88 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    bRam0000000004f9b936 = 1;
  }
  plStack_68 = (long *)0x0;
  uStack_6c = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plStack_68 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(param_1,0);
  puVar6 = PTR_DAT_04caa160;
  puVar5 = PTR_DAT_04ca9c08;
  puVar3 = PTR_DAT_04ca9ae8;
  if (plStack_68 != (long *)0x0) {
                    /* try { // try from 02283b50 to 02383b57 has its CatchHandler @ 02283b8c */
                    /* try { // try from 02283b58 to 02383b9f has its CatchHandler @ 02283ac4 */
    uVar15 = 0xffffffff;
LAB_02283b70:
    do {
      plVar8 = plStack_68;
      lVar12 = *plStack_68;
      lVar11 = *(long *)puVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 02283ae0 with catch @ 02283b84 */
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 02283b04 with catch @ 02283b88 */
                    /* catch() { ... } // from try @ 02283b50 with catch @ 02283b8c */
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02283bbc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
                    /* try { // try from 02283ba0 to 02383bd3 has its CatchHandler @ 02283ba0
                       catch() { ... } // from try @ 02283ba0 with catch @ 02283ba0
                       catch() { ... } // from try @ 02283be4 with catch @ 02283ba0 */
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_68,lVar11,0);
LAB_02283bbc:
      uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar8 = plStack_68;
      puVar4 = PTR_DAT_04ca9b30;
      if ((uVar13 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_0216e7a0(plStack_68,*(undefined8 *)PTR_DAT_04ca9b30);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar11 = *plVar8;
                    /* try { // try from 02283f1c to 02383f9f has its CatchHandler @ 02284140 */
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_02283f44;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_02283f2c;
      }
      if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02283bd4 to 02383be3 has its CatchHandler @ 02283bf8 */
      lVar12 = *plStack_68;
      lVar11 = *(long *)puVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
                    /* try { // try from 02283be4 to 02383c0b has its CatchHandler @ 02283ba0 */
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_02283c24;
          }
                    /* catch() { ... } // from try @ 02283bd4 with catch @ 02283bf8 */
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_68,lVar11,1);
LAB_02283c24:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cad740 + 0x130);
                    /* try { // try from 02283c60 to 02383c97 has its CatchHandler @ 02283c60
                       catch() { ... } // from try @ 02283c60 with catch @ 02283c60
                       catch() { ... } // from try @ 02283cf0 with catch @ 02283c60 */
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cad740))
      {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar8);
      }
      lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                         (plVar8,*(undefined8 *)PTR_DAT_04cad7c0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02283c98 to 02383c9f has its CatchHandler @ 02283d08 */
      uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar13 & 1) == 0) {
LAB_02283d28:
        if (param_4 == 0) goto LAB_02283e5c;
LAB_02283d2c:
        lVar11 = *(long *)(param_4 + 0x10);
        lVar12 = *(long *)PTR_DAT_04cad6c0;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
        if (lVar11 == 0) {
LAB_02283e5c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = *(uint *)(param_4 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_4 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = (long)plVar8;
          thunk_FUN_02134474(plVar10,plVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_4,plVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        if (param_5 != 0) {
          lVar11 = *(long *)(param_5 + 0x10);
          lVar12 = *(long *)puVar6;
                    /* try { // try from 02283da0 to 02383da3 has its CatchHandler @ 02283dbc */
                    /* try { // try from 02283da4 to 02383dcf has its CatchHandler @ 02283d24 */
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(param_5 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    /* catch() { ... } // from try @ 02283da0 with catch @ 02283dbc */
              *(uint *)(param_5 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = param_2;
            }
            else {
                    /* try { // try from 02283dd0 to 02383eab has its CatchHandler @ 02283dd0
                       catch() { ... } // from try @ 02283dd0 with catch @ 02283dd0
                       catch() { ... } // from try @ 02283eb0 with catch @ 02283dd0
                       catch() { ... } // from try @ 0228411c with catch @ 02283dd0 */
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (param_5,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if (param_6 != 0) {
              lVar11 = *(long *)(param_6 + 0x10);
              lVar12 = *(long *)puVar6;
              *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(param_6 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(param_6 + 0x18) = uVar2 + 1;
                  *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar15;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (param_6,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                if (plStack_68 == (long *)0x0) break;
                goto LAB_02283b70;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_02283d28;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02283cc0 to 02383cc3 has its CatchHandler @ 02283d10 */
      uVar13 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                         (param_3,*(long *)(lVar11 + 0x20),&uStack_6c,
                          *(undefined8 *)PTR_DAT_04cad650);
      if ((uVar13 & 1) == 0) goto LAB_02283d28;
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02283cd8 to 02383cdb has its CatchHandler @ 02283d0c */
                    /* try { // try from 02283ce8 to 02383cef has its CatchHandler @ 02283d08 */
      uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                        (param_4,uStack_6c,*(undefined8 *)PTR_DAT_04cad7c8);
                    /* try { // try from 02283cf0 to 02383d23 has its CatchHandler @ 02283c60 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02283c98 with catch @ 02283d08
                       catch() { ... } // from try @ 02283ce8 with catch @ 02283d08 */
                    /* catch() { ... } // from try @ 02283cd8 with catch @ 02283d0c */
                    /* catch() { ... } // from try @ 02283cc0 with catch @ 02283d10 */
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar9,plVar8,0);
      if ((uVar13 & 1) == 0) goto LAB_02283d2c;
      uVar15 = uStack_6c;
    } while (plStack_68 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02283f2c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02283f60;
    }
  }
LAB_02283f44:
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar4,0);
LAB_02283f60:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}

