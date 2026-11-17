/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyCanvases
void Dino_BusSand_App_UI_HallScene__ApplyCanvases (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyCanvases
   void Dino_BusSand_App_UI_HallScene__ApplyCanvases (Dino_BusSand_App_UI_HallScene_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__ApplyCanvases_22d1c6c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  
                    /* try { // try from 023d1c7c to 024d1cfb has its CatchHandler @ 023d1c7c
                       catch() { ... } // from try @ 023d1c7c with catch @ 023d1c7c
                       catch() { ... } // from try @ 023d1d0c with catch @ 023d1c7c
                       catch() { ... } // from try @ 023d1d74 with catch @ 023d1c7c
                       catch() { ... } // from try @ 023d1da8 with catch @ 023d1c7c */
  if ((bRam0000000004f9c3bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ce8);
    FUN_02132f7c(PTR_DAT_04cb6cf0);
    FUN_02132f7c(PTR_DAT_04cb6cf8);
    FUN_02132f7c(PTR_DAT_04cb6d00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6d08);
    bRam0000000004f9c3bc = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    /* try { // try from 023d1cfc to 024d1d0b has its CatchHandler @ 023d1d44 */
    if (0 < iVar2) {
                    /* try { // try from 023d1d0c to 024d1d6f has its CatchHandler @ 023d1c7c */
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar2,0);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d1cfc with catch @ 023d1d44
                        */
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                          (*(long *)(param_1 + 0x30),1,*(undefined8 *)PTR_DAT_04cb6cf0), lVar5 != 0)
       ) {
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar4) {
        uVar12 = 0;
        do {
                    /* try { // try from 023d1d70 to 024d1d73 has its CatchHandler @ 023d1da0 */
                    /* try { // try from 023d1d74 to 024d1d8f has its CatchHandler @ 023d1c7c */
          if (uVar4 <= uVar12) goto LAB_023d1f00;
          lVar11 = *(long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_023d1efc;
          iVar2 = UnityEngine_Canvas__get_renderMode_467f200(lVar11,0);
                    /* try { // try from 023d1d90 to 024d1d9f has its CatchHandler @ 023d1da0 */
          if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 023d1d70 with catch @ 023d1da0
                       catch() { ... } // from try @ 023d1d90 with catch @ 023d1da0 */
                    /* try { // try from 023d1da4 to 024d1da7 has its CatchHandler @ 023d1db0 */
            UnityEngine_Canvas__set_renderMode_467f2b4(lVar11,1,0);
                    /* try { // try from 023d1da8 to 024d1db3 has its CatchHandler @ 023d1c7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023d1da4 with catch @ 023d1db0
                        */
            UnityEngine_Canvas__set_worldCamera_4680ffc(lVar11,*(undefined8 *)(param_1 + 0x20),0);
            UnityEngine_Canvas__set_planeDistance_467fd30(0x42c80000,lVar11,0);
          }
          uVar4 = *(uint *)(lVar5 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar4);
      }
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar5 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_1 + 0x30),0),
         lVar5 != 0)) {
        lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb6d08,0);
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar11);
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if ((lVar5 == 0) ||
             (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                (lVar5,1,*(undefined8 *)PTR_DAT_04cb6ce8), puVar1 = PTR_DAT_04cb6cf8
             , lVar5 == 0)) goto LAB_023d1efc;
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar3 = 0;
            uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar3) {
LAB_023d1f00:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              lVar11 = *(long *)(param_1 + 0x60);
              if (lVar11 == 0) goto LAB_023d1efc;
              lVar7 = *(long *)(lVar11 + 0x10);
              uVar10 = *(undefined8 *)(lVar5 + 0x20 + uVar3 * 8);
              lVar9 = *(long *)puVar1;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_023d1efc;
              uVar4 = *(uint *)(lVar11 + 0x18);
              if (uVar4 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
                *puVar8 = uVar10;
                thunk_FUN_02134474(puVar8);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
        }
        return;
      }
    }
  }
LAB_023d1efc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

