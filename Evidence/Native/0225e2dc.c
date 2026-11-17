/* IL2CPP: Dino.BusSand.App.SpriteSkin$$TryGet
bool Dino_BusSand_App_SpriteSkin__TryGet (System_String_o* sbName, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SpriteSkin$$TryGet
   bool Dino_BusSand_App_SpriteSkin__TryGet (System_String_o* sbName, UnityEngine_Sprite_o** sprite,
   const MethodInfo* method); */

uint Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9b80c & 1) == 0) {
                    /* try { // try from 0225e304 to 0235e30b has its CatchHandler @ 0225e334 */
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cabf48);
    FUN_02132f7c(PTR_DAT_04cabf50);
    FUN_02132f7c(PTR_DAT_04cab208);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225e304 with catch @ 0225e334
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cabf60);
    bRam0000000004f9b80c = 1;
  }
  uStack_28 = 0;
  *param_2 = 0;
  thunk_FUN_02134474(param_2,0);
  uVar5 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar5 & 1) == 0) {
    if ((param_1 == 0) ||
       ((uVar5 = System_String__EndsWith_46d07b4(param_1,*(undefined8 *)PTR_DAT_04cabf60,0),
        (uVar5 & 1) != 0 &&
        (param_1 = System_String__Substring_46d4848(param_1,0,*(int *)(param_1 + 0x10) + -2,0),
        param_1 == 0)))) goto LAB_0225e5bc;
    iVar3 = System_String__IndexOf_46d72c4(param_1,0x40,0);
    if (0 < iVar3) {
      param_1 = System_String__Substring_46d4848(param_1,0,iVar3,0);
    }
    puVar2 = PTR_DAT_04cabf58;
    lVar6 = *(long *)PTR_DAT_04cabf58;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_0225e5bc;
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (**(long **)(lVar6 + 0xb8),param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cab608)
    ;
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_0225e5bc;
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar6,uStack_28,param_2,*(undefined8 *)PTR_DAT_04cabf48);
      if ((uVar5 & 1) != 0) {
        uVar7 = *param_2;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = 1;
          goto LAB_0225e4fc;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar6 == 0) {
LAB_0225e5bc:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = Dino_BusSand_GameAssets__GetSprite_237cc24(lVar6,uStack_28,0);
        *param_2 = uVar7;
        thunk_FUN_02134474(param_2,uVar7);
        uVar7 = *param_2;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_0225e5bc;
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar6,uStack_28,*param_2,*(undefined8 *)PTR_DAT_04cabf50);
        }
        uVar7 = *param_2;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        goto LAB_0225e4fc;
      }
    }
  }
  uVar4 = 0;
LAB_0225e4fc:
  return uVar4 & 1;
}

