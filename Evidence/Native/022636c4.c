/* IL2CPP: Dino.BusSand.App.UiAssets$$Sprite
UnityEngine_Sprite_o* Dino_BusSand_App_UiAssets__Sprite (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Sprite
   UnityEngine_Sprite_o* Dino_BusSand_App_UiAssets__Sprite (System_String_o* key, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UiAssets__Sprite_21636c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9b842 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cac380);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cabf60);
    FUN_02132f7c(PTR_DAT_04cac388);
    bRam0000000004f9b842 = 1;
  }
  uStack_38 = 0;
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(param_1,&uStack_38);
    puVar2 = PTR_DAT_04cab490;
    uVar5 = uStack_38;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UiAssets__Ensure_2162bb4();
      puVar3 = PTR_DAT_04cac380;
      uVar5 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                        (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),param_1,
                         *(undefined8 *)PTR_DAT_04cac380);
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02263828 with catch @ 022637d4 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* try { // try from 022637f4 to 023637fb has its CatchHandler @ 02263858 */
        uVar4 = System_String__EndsWith_46d07b4(param_1,*(undefined8 *)PTR_DAT_04cabf60,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
                    /* try { // try from 0226381c to 02363827 has its CatchHandler @ 02263854 */
            lVar6 = *(long *)puVar2;
          }
                    /* try { // try from 02263828 to 02363883 has its CatchHandler @ 022637d4 */
          uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
          uVar5 = System_String__Substring_46d4848(param_1,0,*(int *)(param_1 + 0x10) + -2,0);
          uVar5 = Dino_BusSand_App_UiAssets__Load_object__2946ec8(uVar7,uVar5,*(undefined8 *)puVar3)
          ;
        }
      }
                    /* catch() { ... } // from try @ 0226381c with catch @ 02263854 */
                    /* catch() { ... } // from try @ 022637f4 with catch @ 02263858 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
        uVar5 = System_String__Concat_46c82e0(param_1,*(undefined8 *)PTR_DAT_04cabf60,0);
        uVar5 = Dino_BusSand_App_UiAssets__Load_object__2946ec8(uVar7,uVar5,*(undefined8 *)puVar3);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cac388,param_1);
      }
    }
  }
                    /* try { // try from 02263908 to 0236394b has its CatchHandler @ 02263908
                       catch() { ... } // from try @ 02263908 with catch @ 02263908
                       catch() { ... } // from try @ 02263a20 with catch @ 02263908 */
  return uVar5;
}

