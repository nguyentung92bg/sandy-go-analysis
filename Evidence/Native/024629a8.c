/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawToasts
void Dino_BusSand_Cheat_CheatManager__DrawToasts (Dino_BusSand_Cheat_CheatManager_o* __this, float vw, float vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawToasts
   void Dino_BusSand_Cheat_CheatManager__DrawToasts (Dino_BusSand_Cheat_CheatManager_o* __this,
   float vw, float vh, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__DrawToasts_23629a8
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float extraout_w1;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04cba798;
  if ((bRam0000000004f9c74b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba7a0);
    FUN_02132f7c(PTR_DAT_04cba548);
    FUN_02132f7c(PTR_DAT_04cba7a8);
    FUN_02132f7c(PTR_DAT_04cba490);
                    /* try { // try from 02462a24 to 02562a2b has its CatchHandler @ 02462ab4 */
    FUN_02132f7c(PTR_DAT_04cba7b0);
                    /* try { // try from 02462a2c to 02562aa7 has its CatchHandler @ 02462970 */
    FUN_02132f7c(PTR_DAT_04cba7b8);
    FUN_02132f7c(PTR_DAT_04cba7c0);
    FUN_02132f7c(PTR_DAT_04cba798);
    bRam0000000004f9c74b = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar5,0);
  uVar10 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar3 = PTR_DAT_04cba7c0;
  puVar2 = PTR_DAT_04cba7b8;
  if (lVar5 != 0) {
    lVar9 = *(long *)(param_5 + 0x160);
    *(undefined4 *)(lVar5 + 0x10) = uVar10;
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 02462aa8 to 02562aab has its CatchHandler @ 02462ab0 */
    System_Predicate_CheatManager_ToastLine____ctor_2c518a4(uVar6,lVar5,*(undefined8 *)puVar3,0);
                    /* try { // try from 02462aac to 02562acf has its CatchHandler @ 02462970 */
    if (lVar9 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02462aa8 with catch @ 02462ab0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02462a24 with catch @ 02462ab4
                        */
      System_Collections_Generic_List_CheatManager_ToastLine___RemoveAll_3b1edb8
                (lVar9,uVar6,*(undefined8 *)PTR_DAT_04cba7a8);
      puVar4 = PTR_DAT_04cba7b0;
      puVar3 = PTR_DAT_04cba7a0;
      puVar2 = PTR_DAT_04cba548;
      fVar1 = _UNK_00e207cc;
      if (*(long *)(param_5 + 0x160) != 0) {
                    /* try { // try from 02462ad0 to 02562ad3 has its CatchHandler @ 02462af4 */
        iVar8 = *(int *)(*(long *)(param_5 + 0x160) + 0x18);
                    /* try { // try from 02462ad4 to 02562af7 has its CatchHandler @ 02462970 */
        if (-1 < iVar8 + -1) {
                    /* catch() { ... } // from try @ 02462ad0 with catch @ 02462af4 */
                    /* try { // try from 02462af8 to 02562aff has its CatchHandler @ 02462b08 */
                    /* try { // try from 02462b00 to 02562b0b has its CatchHandler @ 02462970 */
          param_2 = param_2 * _UNK_00e20474;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02462af8 with catch @ 02462b08
                        */
          do {
            if (*(long *)(param_5 + 0x160) == 0) goto LAB_02462c9c;
            iVar8 = iVar8 + -1;
            uVar6 = System_Collections_Generic_List_CheatManager_ToastLine___get_Item_3b1d418
                              (*(long *)(param_5 + 0x160),iVar8,*(undefined8 *)puVar4);
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            UnityEngine_GUIContent___ctor_440e984(uVar7,uVar6,0);
            if (*(long *)(param_5 + 200) == 0) goto LAB_02462c9c;
            fVar11 = (float)UnityEngine_GUIStyle__CalcSize_4417c3c(*(long *)(param_5 + 200),uVar7,0)
            ;
            fVar14 = fVar11 + 4.0;
            if (param_1 + -20.0 <= fVar11 + 4.0) {
              fVar14 = param_1 + -20.0;
            }
            if (*(long *)(param_5 + 200) == 0) goto LAB_02462c9c;
            fVar11 = (float)UnityEngine_GUIStyle__CalcHeight_4417c40
                                      (fVar14,*(long *)(param_5 + 200),uVar7,0);
            if (*(long *)(param_5 + 0x160) == 0) goto LAB_02462c9c;
                    /* try { // try from 02462ba4 to 02562cdf has its CatchHandler @ 02462ba4
                       catch() { ... } // from try @ 02462ba4 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462ce8 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462e60 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462eec with catch @ 02462ba4
                       catch() { ... } // from try @ 02462f58 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462fa4 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462fd0 with catch @ 02462ba4
                       catch() { ... } // from try @ 02462ff4 with catch @ 02462ba4
                       catch() { ... } // from try @ 02463020 with catch @ 02462ba4
                       catch() { ... } // from try @ 02463044 with catch @ 02462ba4
                       catch() { ... } // from try @ 02463070 with catch @ 02462ba4 */
            System_Collections_Generic_List_CheatManager_ToastLine___get_Item_3b1d418
                      (*(long *)(param_5 + 0x160),iVar8,*(undefined8 *)puVar4);
            fVar12 = (extraout_w1 - *(float *)(lVar5 + 0x10)) / fVar1;
            fVar13 = 1.0;
            if (fVar12 <= 1.0) {
              fVar13 = fVar12;
            }
            fVar15 = 0.0;
            if (0.0 <= fVar12) {
              fVar15 = fVar13;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_GUI__get_color_440679c(0);
            UnityEngine_GUI__set_color_4406860(0x3f800000,0x3f800000,0x3f800000,fVar15,0);
            UnityEngine_GUI__Label_4407f2c
                      ((param_1 - fVar14) * 0.5,param_2,fVar14,fVar11,uVar7,
                       *(undefined8 *)(param_5 + 200),0);
            UnityEngine_GUI__set_color_4406860(uVar10,fVar13,param_3,param_4,0);
            param_2 = param_2 + fVar11 + 4.0;
          } while (0 < iVar8);
        }
        return;
      }
    }
  }
LAB_02462c9c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

