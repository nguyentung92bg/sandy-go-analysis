/* IL2CPP: Dino.BusSand.GameAssets$$GetSprite
UnityEngine_Sprite_o* Dino_BusSand_GameAssets__GetSprite (Dino_BusSand_GameAssets_o* __this, System_String_o* spriteName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetSprite
   UnityEngine_Sprite_o* Dino_BusSand_GameAssets__GetSprite (Dino_BusSand_GameAssets_o* __this,
   System_String_o* spriteName, const MethodInfo* method); */

long Dino_BusSand_GameAssets__GetSprite_237cc24(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_38;
  
  if ((bRam0000000004f9c813 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf48);
    FUN_02132f7c(PTR_DAT_04cabf50);
    FUN_02132f7c(PTR_DAT_04cbb7d0);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabf60);
    FUN_02132f7c(PTR_DAT_04cac388);
    bRam0000000004f9c813 = 1;
  }
  lStack_38 = 0;
  plVar8 = (long *)(param_1 + 0x70);
  lVar5 = *plVar8;
  if (lVar5 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_GameAssets__Index_object__275a37c(uVar9,*(undefined8 *)PTR_DAT_04cbb7d0);
    *plVar8 = lVar5;
    thunk_FUN_02134474(plVar8,lVar5);
    lVar5 = *plVar8;
    if (lVar5 == 0) goto LAB_0247ceb4;
  }
  puVar1 = PTR_DAT_04cabf48;
  uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar5,param_2,&lStack_38,*(undefined8 *)PTR_DAT_04cabf48);
  puVar2 = PTR_DAT_04cabf60;
  if ((uVar6 & 1) != 0) {
    return lStack_38;
  }
  if (param_2 != 0) {
    uVar6 = System_String__EndsWith_46d07b4(param_2,*(undefined8 *)PTR_DAT_04cabf60,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = *plVar8;
      uVar9 = System_String__Substring_46d4848(param_2,0,*(int *)(param_2 + 0x10) + -2,0);
      if (lVar5 == 0) goto LAB_0247ceb4;
      uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar5,uVar9,&lStack_38,*(undefined8 *)puVar1);
      if ((uVar6 & 1) != 0) {
        return lStack_38;
      }
    }
    lVar5 = *plVar8;
    uVar9 = System_String__Concat_46c82e0(param_2,*(undefined8 *)puVar2,0);
    if (lVar5 != 0) {
      uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar5,uVar9,&lStack_38,*(undefined8 *)puVar1);
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)Dino_BusSand_GameAssets__GetTexture_237ceb8(param_1,param_2);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (plVar7 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            iVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
            lStack_38 = UnityEngine_Sprite__Create_435118c
                                  (0,0,(float)iVar3,(float)iVar4,0x3f000000,0x3f000000,0x42c80000,
                                   plVar7,0);
            if (lStack_38 != 0) {
              UnityEngine_Object__set_name_43c72ec(lStack_38,param_2,0);
              if (*plVar8 != 0) {
                System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                          (*plVar8,param_2,lStack_38,*(undefined8 *)PTR_DAT_04cabf50);
                return lStack_38;
              }
            }
          }
          goto LAB_0247ceb4;
        }
        if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_GameAssets__Miss_237cae0(*(undefined8 *)PTR_DAT_04cac388,param_2);
        lStack_38 = 0;
      }
      return lStack_38;
    }
  }
LAB_0247ceb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

